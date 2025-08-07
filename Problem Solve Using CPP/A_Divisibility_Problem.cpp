#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ans;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a>> b;

        if (a % b == 0)
        {
            ans = 0;
        }
        else
        {
            if (a < b)
            {
                ans = b - a;
            }
            else
            {

                ans = b - (a % b);
            }
        }
        cout << ans << endl;
    }
}