#include <bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
    while (n > 0)
    {
        long long d = n % 10;
        if (d != 4 && d != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    long long  n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}