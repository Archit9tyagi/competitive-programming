#include <iostream>
using namespace std;
void fun(string p, string q)
{
    if (p.size() == 0)
    {
        cout << q << endl;
        return;
    }

    for (int i = 0; i < p.size(); i++)
    {
        char ch = p[i];
        string right = p.substr(i+1);
        string left = p.substr(0, i );
        string res = left + right;
        fun(res,q + ch);
    }
}
int main()
{
    string s;
    cin >> s;
    fun(s, "");
    return 0;
}