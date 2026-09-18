// count no of 1 bits in binary representation of a number
#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int res = 0;
    // while(num > 0){
    //     if(num % 2 != 0){
    //         res++;
    //     }
    //     num = num >> 1;
    // }
    while(num > 0){
        num = num & num - 1;
        res++;
    }
    cout<<res;     
    return 0;
}