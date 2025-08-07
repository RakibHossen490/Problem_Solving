#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int cnt[5] = {};

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        cnt[x]++;
    }

    int taxis = cnt[4];
    int pair31 = min(cnt[3], cnt[1]);
    taxis += pair31;
    cnt[3] -= pair31;
    cnt[1] -= pair31;
    taxis += cnt[3];
    taxis += cnt[2] / 2;
    cnt[2] %= 2;

    if (cnt[2])
    {
        taxis += 1;
        cnt[1] -= min(2, cnt[1]);
    }
    if (cnt[1] > 0)
    {
        taxis += (cnt[1] + 3) / 4;
    }

    cout << taxis << endl;
    return 0;
}
