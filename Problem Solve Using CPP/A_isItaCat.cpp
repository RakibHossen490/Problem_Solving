#include <bits/stdc++.h>
using namespace std;

bool isCat(string s)
{
    for (char &c : s)
    {
        c = tolower(c);
    }
    string pattern = "meow";
    int ptr = 0;
    for (int i = 0; i < s.size();)
    {
        if (s[i] != pattern[ptr])
        {
            return false;
        }
        while (i < s.size() && s[i] == pattern[ptr])
        {
            i++;
           
        }
        ptr++;
    }
    return ptr == 4;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (isCat(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}