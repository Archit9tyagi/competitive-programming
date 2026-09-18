// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// ****
// ***
// **
// *


#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i =0;i<num;i++){
        for(int j = num;j > i;j--){
            cout<<'*';
        }
        cout<<endl;
    }       
    return 0;
}
