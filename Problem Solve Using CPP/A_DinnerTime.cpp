#include <bits/stdc++.h>
using namespace std;

void answer() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;

    if (p == n) {
        if (m == q) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    if (n % p == 0) {
        if (m == (n / p) * q) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        answer();
    }
    return 0;
}