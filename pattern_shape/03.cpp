// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 22
// 333
// 4444
// 55555
// Print the pattern in the function given to you.

#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int a = 1;
    for(int i =0;i<num;i++){
        for(int j = 0;j <= i;j++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }       
    return 0;
}