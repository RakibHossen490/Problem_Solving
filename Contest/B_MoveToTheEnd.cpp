#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend()); // বড় থেকে ছোট Sort
        
        vector<long long> prefix(n);
        prefix[0] = a[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cout << prefix[i] << " ";
        }
        cout << "\n";
    }
}
