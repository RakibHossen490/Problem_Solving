#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int minDiffer = arr[n-1]-arr[0];
    for (int i = 1; i <= m - n; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        minDiffer = min(diff, minDiffer);
    }
    cout << minDiffer << endl;
    return 0;
}