#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> num;
    for (char ch : s)
    {
        if (ch != '+')
        {
            num.push_back(ch - '0');
        }
    }
    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i];
        if (i != num.size() - 1)
        {
            cout << "+";
        }
    }
}