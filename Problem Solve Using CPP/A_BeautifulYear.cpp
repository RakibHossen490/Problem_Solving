#include <bits/stdc++.h>
using namespace std;
bool isdistinct(int year)
{
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}
int main()
{
    int year;
    cin >> year;
    year++;

    while (!isdistinct(year))
    {
        year++;
    }
    cout << year << endl;
}