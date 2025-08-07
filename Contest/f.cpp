#include <bits/stdc++.h>
using namespace std;

const int MOD = 3;

// Fast exponentiation modulo MOD
int mod_exp(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

// Function to find the cycle and count components
int find_cycles_and_components(int n, vector<int>& g) {
    vector<bool> visited(n, false);
    vector<bool> in_stack(n, false); // to track the current stack of DFS
    int components = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int cur = i;
            set<int> cycle;
            while (!visited[cur]) {
                visited[cur] = true;
                in_stack[cur] = true;
                cycle.insert(cur);
                cur = g[cur] - 1;
            }
            
            if (in_stack[cur]) {
                components++;
            }

            // Clear the stack information
            for (int node : cycle) {
                in_stack[node] = false;
            }
        }
    }
    return components;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> g(n);
        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }

        while (q--) {
            int x, y, k;
            cin >> x >> y >> k;
            x--; y--; // 0-based index
            
            // Update the graph with new edge
            g[x] = y + 1;

            // Find number of cycles/components
            int components = find_cycles_and_components(n, g);

            // Answer is k^components % 3
            int answer = mod_exp(k, components, MOD);
            cout << answer << "\n";
        }
    }

    return 0;
}
