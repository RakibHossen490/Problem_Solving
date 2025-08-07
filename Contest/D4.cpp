#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }

        int rni = n / 2 - k;

        if (c0 >= rni && c1 >= rni) {
            int r0 = c0 - rni;
            int r1 = c1 - rni;
            if ((r0 + r1) == 2 * k && (r0 % 2 == 0 || r1 % 2 == 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}