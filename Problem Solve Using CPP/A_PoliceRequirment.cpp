#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int availabePolice = 0;
    int unratedCrime = 0;
    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;
        if (event == -1)
        {
            if (availabePolice > 0)
            {
                availabePolice--;
            }
            else
            {
                unratedCrime++;
            }
        }
        else
        {
            availabePolice += event;
        }
    }
    cout<<unratedCrime<<endl;
}