#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (even > odd && arr[i] % 2 != 0)
        {
            cout << i + 1 << endl;
            break;
        }
        if (odd > even && arr[i] % 2 == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}