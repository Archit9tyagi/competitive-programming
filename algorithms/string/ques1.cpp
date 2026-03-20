#include<iostream>
using namespace std;
int main() {
    string s,abb;
    cin>>s>>abb;
    
    int i = 0,j = 0;bool res = false;
    while(i<abb.size()){
        bool flag = false;
        while(j < s.size()){
            if(abb[i] == s[j]){
                flag = true;
                break;
            }
            j++;
        }
        if (flag == true)
        {
            j = j + 1;
            i = i + 1;
        }
        else{
            res = true;
            break;
        }
    }
    if(res)
    cout<<"False";
    else
    cout<<"True";
    return 0;
}