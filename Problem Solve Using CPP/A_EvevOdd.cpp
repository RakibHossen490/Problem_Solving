#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, k, result;
    cin >> n >> k;
    long long odd = (n + 1) / 2;
    if (k <= odd)
    {
        result = 2 * k - 1;
    }
    else
    {
        result = 2 * (k - odd);
    }
    cout<<result<<endl;
}