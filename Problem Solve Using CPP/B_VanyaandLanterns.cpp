#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double gap = 0;
    for (int i = 1; i < n; i++)
    {
        gap = max(gap, (double)arr[i] - arr[i - 1]);
    }
    double edge_left = arr[0] - 0;
    double edge_right = l - arr[n - 1];
    double result = max({gap / 2.0, edge_left, edge_right});
    cout << fixed << setprecision(10) << result << endl;
}