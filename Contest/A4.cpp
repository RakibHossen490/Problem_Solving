#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        bool liar = false;

        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] == 0 && a[i + 1] == 0)
            {
                liar = true;
                break;
            }
        }

        if (!liar && accumulate(a.begin(), a.end(), 0) > n - 1)
            liar = true;

        cout << (liar ? "YES" : "NO") << endl;
    }
    return 0;
}
