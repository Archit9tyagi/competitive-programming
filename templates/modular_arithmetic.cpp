#include <bits/stdc++.h>
using namespace std;

// ==================== MODULAR ARITHMETIC ====================
const int MOD = 1e9 + 7;

long long mod_add(long long a, long long b, long long m = MOD) {
    return ((a % m) + (b % m)) % m;
}

long long mod_sub(long long a, long long b, long long m = MOD) {
    return ((a % m) - (b % m) + m) % m;
}

long long mod_mul(long long a, long long b, long long m = MOD) {
    return ((a % m) * (b % m)) % m;
}

// Binary exponentiation for modular power
long long mod_pow(long long base, long long exp, long long m = MOD) {
    long long result = 1;
    base %= m;
    while(exp > 0) {
        if(exp & 1) result = mod_mul(result, base, m);
        base = mod_mul(base, base, m);
        exp >>= 1;
    }
    return result;
}

// Modular multiplicative inverse (when m is prime)
long long mod_inv(long long a, long long m = MOD) {
    return mod_pow(a, m - 2, m);  // Fermat's little theorem
}

long long mod_div(long long a, long long b, long long m = MOD) {
    return mod_mul(a, mod_inv(b, m), m);
}

// Factorial and inverse factorial for combinations
const int MAXN = 1e6 + 5;
long long fact[MAXN], inv_fact[MAXN];

void precompute_factorials(int n = MAXN - 1) {
    fact[0] = 1;
    for(int i = 1; i <= n; i++) {
        fact[i] = mod_mul(fact[i-1], i);
    }
    inv_fact[n] = mod_inv(fact[n]);
    for(int i = n - 1; i >= 0; i--) {
        inv_fact[i] = mod_mul(inv_fact[i+1], i+1);
    }
}

// nCr modulo MOD
long long nCr(int n, int r) {
    if(r > n || r < 0) return 0;
    return mod_mul(fact[n], mod_mul(inv_fact[r], inv_fact[n-r]));
}

// nPr modulo MOD
long long nPr(int n, int r) {
    if(r > n || r < 0) return 0;
    return mod_mul(fact[n], inv_fact[n-r]);
}

int main() {
    // Example usage
    precompute_factorials();
    
    cout << "5C2 = " << nCr(5, 2) << endl;  // 10
    cout << "5P2 = " << nPr(5, 2) << endl;  // 20
    cout << "2^10 mod 1e9+7 = " << mod_pow(2, 10) << endl;  // 1024
    
    return 0;
}
