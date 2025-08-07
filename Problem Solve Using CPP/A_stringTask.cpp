#include <bits/stdc++.h>
using namespace std;
bool isVawel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main()
{
    string s;
    cin >> s;

    string result = "";

    for (char c : s)
    {
        if (!isVawel(c))
        {
            result += '.';
            result += tolower(c);
        }
    }
    cout << result << endl;
}