#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int solveProblem = 0;
    int solveTime = 240 - k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        solveProblem += (i * 5);
        if (solveProblem > solveTime)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
}