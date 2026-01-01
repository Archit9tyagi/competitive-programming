#!/bin/bash

# ==================== STRESS TEST SCRIPT ====================
# Usage: ./stress_test.sh <brute_force_file> <optimized_file> <generator_file> <iterations>
# Example: ./stress_test.sh brute.cpp solution.cpp gen.cpp 100

if [ "$#" -ne 4 ]; then
    echo "Usage: $0 <brute_force> <optimized> <generator> <iterations>"
    exit 1
fi

BRUTE=$1
OPTIMIZED=$2
GENERATOR=$3
ITERATIONS=$4

# Compile all files
echo "Compiling..."
g++ -std=c++17 -O2 $BRUTE -o brute
g++ -std=c++17 -O2 $OPTIMIZED -o optimized
g++ -std=c++17 -O2 $GENERATOR -o gen

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "Running $ITERATIONS test cases..."

for ((i=1; i<=ITERATIONS; i++)); do
    # Generate input
    ./gen > input.txt
    
    # Run both solutions
    ./brute < input.txt > brute_output.txt
    ./optimized < input.txt > optimized_output.txt
    
    # Compare outputs
    if ! diff -q brute_output.txt optimized_output.txt > /dev/null; then
        echo "❌ Test case $i failed!"
        echo "Input:"
        cat input.txt
        echo ""
        echo "Brute force output:"
        cat brute_output.txt
        echo ""
        echo "Optimized output:"
        cat optimized_output.txt
        exit 1
    fi
    
    echo "✅ Test case $i passed"
done

echo ""
echo "🎉 All $ITERATIONS test cases passed!"

# Cleanup
rm -f brute optimized gen input.txt brute_output.txt optimized_output.txt
