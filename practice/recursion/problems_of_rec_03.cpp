// skips a character 
// i/p -> s = "Archit Tyagi"
// o/p -> s1 = "rchit Tygi"
// remove all occurence of a 

// #include<iostream>
// using namespace std;

// string solve(string s, int l, int r) {
    
//     if (l > r) return "";

//     if (l == r) {
//         if (s[l] == 'a' || s[l] == 'A') return "";
//         return string(1, s[l]);
//     }

//     int mid = (l + r) / 2;

//     string left = solve(s, l, mid);
//     string right = solve(s, mid + 1, r);

//     return left + right;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     cout << "String before Remove : " << s << endl;

//     string s1 = solve(s, 0, s.size() - 1);

//     cout << "String after Remove : " << s1;

//     return 0;
// }

// tower of hanoi
// move n discs from source tower to destination tower using the helper discs

// #include<iostream>
// using namespace std;

// void solve(int n, char A, char B, char C){
//     if(n == 1){
//         cout << "Move " << A << " to " << C << endl;
//         return;
//     }

//     solve(n-1, A, C, B);
//     cout << "Move " << A << " to " << C << endl;
//     solve(n-1, B, A, C);
// }

// int main() {
//     int n;
//     cin >> n;

//     solve(n, 'A', 'B', 'C');

//     return 0;
// }

// display the elements of an array?
// display the max element of the array?
// #include<iostream>
// using namespace std;

// void solve(int arr[],int n, int idx){
//     int max = INT_MIN;
//     if(idx == n)return;
//     if(arr[idx] >= max)max = arr[idx];
//     cout<<arr[idx]<<" ";
//     solve(arr,n,idx+1);
// }

// int main() {
    
//     int arr[] = {1,3,5,23,42,234,1212,2342};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     solve(arr,n,0);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int solve(int arr[],int n, int idx,int max){
//     if(idx == n)return max; 
//     if(arr[idx] >= max)
//     max = arr[idx];
//     return solve(arr,n,idx+1,max);;

// }

// int main() {
    
//     int arr[] = {1,3,5,23,42,2343423,1212,2342};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = INT_MIN;
//     int x = solve(arr,n,0,max);
//     cout<<x;
//     return 0;
// }

// print all subsets of a string.
// using recursion
#include<iostream>
using namespace std;

void solve(string s,string res){
    int idx = 0;
    if(s == ""){
        cout<<res<<endl;
        return;
    }
    solve(s.substr(1),res+s[idx]);
    solve(s.substr(1),res);
}

int main() {
    string s;
    cin>>s;
    string res ="";
    solve(s,res);
    cout<<s;
    return 0;
}