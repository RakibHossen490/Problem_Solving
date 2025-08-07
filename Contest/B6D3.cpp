#include <bits/stdc++.h>
using namespace std;

bool canMakeExactGoodPairs(string s, int k) {
    int n = s.size();
    int good = 0;
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - 1 - i]) good++;
    }

    if (k > n / 2) return false; 
    if (k == good) return true;

    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = n - cnt0;

    int diff = abs(good - k);

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int good = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == s[n - 1 - i]) good++;
        }

        if (k > n / 2) {
            cout << "NO\n";
        } else if ((good == k) || ((good - k) % 2 == 0)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
