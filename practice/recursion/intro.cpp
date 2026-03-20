// // // print n time something 
// // #include<iostream>
// // using namespace std;
// // void fun(int n){
// //     if(n == 0)return;
// //     cout<<"Good Morning"<<endl;
// //     fun(n-1);
// // }
// // int main() {
// //     int n;
// //     cout<<"Enter the value of n :";
// //     cin>>n;
// //     fun(n);      
// //     return 0;
// // }
// // to find fact of n
// // #include<iostream>
// // using namespace std;
// // int solve(int n){
// //     if(n == 1 || n == 0)return 1;
// //     return n*solve(n-1);
// // }
// // int main() {
// //     int n;
// //     cin>>n;
// //     int x = solve(n);
// //     cout<<x;      
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // void solve(int x,int n){
// //     if(n == 0)return;
// //     cout<<x<<endl;
// //     solve(x+1,n-1);
// //     return;
// // }
// // int main() {
// //     int n;
// //     cin>>n;
// //     solve(1,n);     
// //     return 0;
// // }
// // to find fact of n
// #include<iostream>
// using namespace std;
// int solve(int n){
//     if(n == 1 )return 1;
//     else if(n == 0)return 0;
//     return n+solve(n-1);
// }
// int main() {
//     int n;
//     cin>>n;
//     int x = solve(n);
//     cout<<x;      
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int pow(int a , int b){
//     if(b == 1)return a;
//     return a*pow(a,b-1);
// }
// int main() {
//     int a,b;
//     cin>>a>>b;
//     int x = pow(a,b);
//     cout<<x;            
//     return 0;
// }