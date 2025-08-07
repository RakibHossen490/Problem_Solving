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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int repeat;
        if (arr[0] == arr[1] || arr[0] == arr[2])
        {
            repeat = arr[0];
        }
        else
        {
            repeat = arr[1];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != repeat)
            {
                cout << i + 1 << endl;
            }
        }
    }
}