#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());
        int ans = n;  

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int mn = a[i], mx = a[j];
                if ((mn + mx) % 2 == 0) {
                    int keep = j - i + 1;
                    ans = min(ans, n - keep);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
