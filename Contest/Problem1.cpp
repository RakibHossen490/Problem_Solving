#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count_1 = 0;
        for (char c : s)
        {
            if (c == '1')
                count_1++;
        }

        int total_ones = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                total_ones += (count_1 - 1);
            }
            else
            {
                total_ones += (count_1 + 1);
            }
        }

        cout << total_ones << endl;
    }

    return 0;
}