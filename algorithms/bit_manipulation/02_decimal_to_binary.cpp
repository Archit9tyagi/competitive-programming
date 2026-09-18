#include<iostream>
using namespace std;
int main() {
    int s;
    cin>>s;
    string res;
    while(s > 0){
        if (s%2 == 0){
            res = '0' + res;
        }
        else{
            res = '1' + res;
        }
        s = s / 2;
        // s = s >> 1;
    }
    cout<<res;   
    return 0;
}