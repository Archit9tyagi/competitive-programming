// find the occurence of a pattern in a string
// ERRORS in this code.

// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     string p;
//     cin>>p;

//     int cnt =0;
//     int i =0;
//     int x = p.size()-1;
//     string st;

//     for(int i = 0;i<p.size();i++){
//         st = st + s[i];
//     }
//     if(st == p)cnt++;

//     while(x < (int)s.size()-1){
//         string z;
//         i++;
//         x++;
//         for(int j =i;j<=x;j++){
//             z = z + s[j];
//         }
//         if(z == p)cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }   

#include <iostream>
using namespace std;

int main(){
    string s, p;
    cin >> s >> p;

    int cnt = 0;
    int i = 0;
    int x = (int)p.size() - 1;
    string st;

    // Check first window
    for(int k = 0; k < (int)p.size(); k++){   // Fix 3: renamed to 'k'
        st = st + s[k];
    }
    if(st == p) cnt++;

    // Slide the window
    while(x < (int)s.size() - 1){             // Fix 2: corrected bound
        string z;
        i++;
        x++;
        for(int j = i; j <= x; j++){
            z = z + s[j];                      // Fix 1: s[j] not s[i]
        }
        if(z == p) cnt++;
    }

    cout << cnt;
    return 0;
}