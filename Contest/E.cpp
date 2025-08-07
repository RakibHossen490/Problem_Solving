#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<vector<int>> pos(k);
    for (int i = 0; i < n; ++i) {
        pos[s[i] - 'a'].push_back(i);
    }

    int q;
    cin >> q;
    while (q--) {
        string t;
        cin >> t;
        int cur = -1;
        int used = 0;

        for (char c : t) {
            int letter = c - 'a';
            auto it = upper_bound(pos[letter].begin(), pos[letter].end(), cur);
            if (it == pos[letter].end()) {
                break;
            }
            cur = *it;
            used++;
        }

        cout << (t.size() - used) << '\n';
    }
}
