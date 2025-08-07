#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << b << " ";
        a = a - b;
        cout << a / 2 << endl;
    }
    else
    {
        cout << a << " ";
        b = b - a;
        cout << b / 2 << endl;
    }
    return 0;
}