#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >>n;
    string s=to_string(n);
    int count = 0;
    for (char ch : s)
    {
        
        if (ch == '4' || ch == '7')
        {
            count++;
        }
    }
    
    if(s.length()==1 && n==7 || n==4){
        cout<<"NO";
    }
    else if ( count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
   
    else
    {
        cout << "NO" << endl;
    }
}