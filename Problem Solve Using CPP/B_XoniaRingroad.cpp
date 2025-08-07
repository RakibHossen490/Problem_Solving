#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;

    long long current = 1;
    long long time = 0;

    for (int i = 0; i < m; i++)
    {
        int task;
        cin >> task;
        if (task >= current)
        {
            time += (task - current);
        }
        else
        {
            time += (n - (current - task));
        }
        current = task;
    }
    cout << time << endl;
}