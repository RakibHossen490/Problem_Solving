#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool turn = true;
    int l = 0, r = n - 1;
    int s = 0, d = 0;
    while (l <= r)
    {
        int pick;
        if (arr[l] > arr[r])
        {
            pick = arr[l++];
        }
        else
        {
            pick = arr[r--];
        }
        if (turn)
        {
            s += pick;
        }
        else
        {
            d += pick;
        }
        turn = !turn;
    }
    cout << s << " " << d << endl;
}