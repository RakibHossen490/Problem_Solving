#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int kl = (k * l)/(n*nl);
    int cd = (c * d)/n;
    int salt=p/(n*np);
    int tost = min({kl, cd, salt});
    cout << tost << endl;
}