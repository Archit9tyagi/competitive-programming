// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *
// **
// ***
// ****
// *****
// Print the pattern in the function given to you.

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cin>>num;
//     for(int i =0;i<num;i++){
//         for(int j = 0;j <= i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }       
//     return 0;
// }

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1
// 12
// 123
// 1234
// 12345


#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i =0;i<num;i++){
        for(int j = 0;j <= i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }       
    return 0;
}
