#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int candies[n];
    for (int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }
    int result;
    for (int i = 0; i < n; i++)
    {
        if (candies[i] % 2 == 0)
        {
            result = candies[i] / 2 - 1;
            cout<<result<<endl;
        }
        else
        {
            result = candies[i] / 2;
            cout<< result<<endl;
        }
    }
}