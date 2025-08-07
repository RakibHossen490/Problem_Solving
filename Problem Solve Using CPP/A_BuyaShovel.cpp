#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
   
    for (int i = 1; i <= 1000; i++)
    {
        int result = a * i;
        if (result % 10 == 0 || (result % 10) - b == 0)
        {
            cout << i << endl;
            break;
        }
    }
}