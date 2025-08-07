#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (size_t pos = s.find("WUB"); pos != string::npos; pos = s.find("WUB"))
    {
        s.replace(pos, 3, " ");
    }
    string result = "";
    bool space = true;
    for (char c : s)
    {
        if (c != ' ')
        {
            result += c;
            space = false;
        }
        else if (!space)
        {
            result += ' ';
            space = true;
        }
    }
    if (!result.empty() && result.back() == ' ')
    {
        result.pop_back();
    }
    cout << result << endl;
}