#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int n, int k, const vector<int> &a, const vector<int> &b)
{
    int knownX = -1;
    for (int i = 0; i < n; ++i)
    {
        if (b[i] != -1)
        {
            int currentX = a[i] + b[i];
            if (knownX == -1)
                knownX = currentX;
            else if (knownX != currentX)
                return 0;
        }
    }

    if (knownX != -1)
    {

        for (int i = 0; i < n; ++i)
        {
            if (b[i] == -1)
            {
                int val = knownX - a[i];
                if (val < 0 || val > k)
                    return 0;
            }
        }
        return 1;
    }

    int maxA = *max_element(a.begin(), a.end());
    int minA = *min_element(a.begin(), a.end());

    int low = maxA;
    int high = k + minA;

    if (low > high)
        return 0;
    return high - low + 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        cout << solve(n, k, a, b) << '\n';
    }

    return 0;
}
