#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> score(n);
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    int maxScore = score[0];
    int minScore = score[0];
    int amazing = 0;
    for (int i = 1; i < n; i++)
    {
        if (score[i] > maxScore)
        {
            amazing++;
            maxScore = score[i];
        }
        else if (score[i] < minScore)
        {
            amazing++;
            minScore = score[i];
        }
    }
    cout << amazing << endl;
}