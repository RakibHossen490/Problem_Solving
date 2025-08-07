#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n, a;
    cin >> m >> n >> a;

    long long flags_n = (n + a - 1) / a;
    long long flags_m = (m + a - 1) / a;
    cout << flags_m * flags_n << endl;
}