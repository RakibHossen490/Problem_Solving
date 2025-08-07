#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int sub;
        if (a >= b)
        {
            sub = a - b;
            if (sub % 10 == 0)
            {
                sub /= 10;
                cout << sub << endl;
            }
            else
            {
                sub = (sub / 10) + 1;
                cout << sub << endl;
            }
        }
        else
        {
            sub = b - a;
            if (sub % 10 == 0)
            {
                sub /= 10;
                cout << sub << endl;
            }
            else
            {
                sub = (sub / 10) + 1;
                cout << sub << endl;
            }
        }
    }
}