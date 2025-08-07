#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int arr[n];
    int count = 1;
    int maxLen=1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i -1])
        {
            count++;
            maxLen=max(count,maxLen);
        }
       else{
        count=1;
       }
    }
    cout<<maxLen<<endl;
}