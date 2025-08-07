#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1; 
vector<bool> is_prime(MAX, true);
set<long long> t_primes;

void generatePrimes() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAX; ++i) {
        if (is_prime[i]) {
            for (long long j = 1LL * i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX; ++i) {
        if (is_prime[i]) {
            t_primes.insert(1LL * i * i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    generatePrimes();

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (t_primes.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
