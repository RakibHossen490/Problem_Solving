#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        string s1 = "YES";
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if (s == s1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}