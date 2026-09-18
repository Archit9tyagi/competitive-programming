#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int res;
    for(int i = 0;i<s.size();i++){
        int x = s[i]-'0';
        // res = res + (x * pow(2,s.size()-i-1));
        res = res + (1 << (s.size() - i - 1));
    }  
    cout<<res;   
    return 0;
}