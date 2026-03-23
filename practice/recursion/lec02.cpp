// // calculate nth fibonacci term 
// #include<iostream>
// using namespace std;
// int pow(int a , int b){
//     if(b == 0)return 1;
//     if(b == 1)return a;
//     int ans =pow(a,b/2);
//     if(b % 2 == 0){
//         return ans*ans;
//     }
//     else{
//         return ans*ans*a;
//     }
// }
// int main() {
//     int a,b;
//     cin>>a>>b;
//     int x = pow(a,b);
//     cout<<x;            
//     return 0;
// }
// // calculate power in log n time
// // #include<iostream>
// // using namespace std;
// // int pow(int a , int b){
// //     if(b == 1)return a;
// //     if(b % 2 == 0){
// //         int ans =pow(a,b/2);
// //         return ans*ans;
// //     }
// //     else{
// //         int ans =pow(a,b/2);
// //         return ans*ans*a;
// //     }
// //     return 0;
// // }
// // int main() {
// //     int a,b;
// //     cin>>a>>b;
// //     int x = pow(a,b);
// //     cout<<x;            
// //     return 0;
// // }

// print zig zag
// 111
// 211121112
// 321112111232111211123
#include<iostream>
using namespace std;
void p(int n){
    if(n == 0)return;
    cout<<n;
    p(n-1);
    cout<<n;
    p(n-1);
    cout<<n;
    return;
}
int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        p(i);         
        cout << endl;

    }
} 