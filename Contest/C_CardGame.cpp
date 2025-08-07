#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 0, bob = 0;
        for (char c : s) {
            if (c == 'A') alice++;
            else bob++;
        }
        if (alice > bob) cout << "Alice\n";
        else cout << "Bob\n";
    }
}
