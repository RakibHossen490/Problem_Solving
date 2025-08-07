#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = stoi(s);
        int root = sqrt(n);
        for (int i = 0; i <= root; i++)
        {
            if (((i + (root - i))*(i+(root-i))) == n)
            {
                cout << i << " " << root - i << endl;
                break;
            }
           else{
             cout<<"-1"<<endl;
             break;
           }
        }
        
    }
}