#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    
    vector<int> v(255,0);
    for(int i = 0; i < s.size(); i++){
        v[s[i]]++;
    }
    for(int i = 0; i < 255; i++){
        if(v[i] > 1){
            cout<<(char)i<<v[i];
        }
    }
    cout<<"True";
            
    return 0;
}