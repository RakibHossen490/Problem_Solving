#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;
        long long full_cycles = n / cycle_sum;
        long long total = full_cycles * cycle_sum;
        int day = full_cycles * 3;

        vector<long long> pattern = {a, b, c};
        for (int i = 0; i < 3; i++) {
            if (total >= n) break;
            total += pattern[i];
            day++;
        }

        cout << day << "\n";
    }

    return 0;
}
