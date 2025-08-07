#include <bits/stdc++.h>
using namespace std;

int get_turns(int x, int total) {
    return max(x - 1, total - x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int row = get_turns(a, n);
        int col = get_turns(b, m);

        cout << row + col << "\n";
    }

    return 0;
}
