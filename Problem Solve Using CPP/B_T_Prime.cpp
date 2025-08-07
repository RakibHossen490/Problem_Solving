#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long x)
{
    if (x < 2)
        return false;
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long root = sqrt(n);
        if (root * root == n && isPrime(root))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
