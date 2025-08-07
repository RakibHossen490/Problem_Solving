#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> number(s.begin(), s.end());
    if (number.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}