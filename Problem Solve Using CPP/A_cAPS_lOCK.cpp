#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool condition = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (iswlower(s[i]))
        {
            condition = false;
            break;
        }
    }
    if (condition)
    {
        for (char &c : s)
        {
            if (islower(c))
            {
                c = toupper(c);
            }
            else
            {
                c = tolower(c);
            }
        }
    }
    cout << s << endl;
}