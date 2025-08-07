#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int arr[4] = {x1, x2, x3, x4};

    sort(arr, arr + 4);
    int r1 = arr[3] - arr[0];
    int r2 = arr[3] - arr[1];
    int r3 = arr[3] - arr[2];
    cout << r1 << " " << r2 << " " << r3 << endl;
    
}