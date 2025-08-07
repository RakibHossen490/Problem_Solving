#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        // Special case when n = 1
        if (n == 1) {
            if (x == 0) {
                cout << -1 << endl;  // Impossible to make XOR=0 with just 1 element
            } else {
                cout << x << endl;   // Only one element is needed, which is x itself
            }
        } else {
            // Case when x = 0
            if (x == 0) {
                cout << 2 << endl;  // [1, 1] is the optimal answer
            } else {
                // Case when n >= 2
                if (x <= n) {
                    cout << 2 * x << endl;  // Minimum sum is 2*x if x <= n
                } else {
                    cout << x + 2 << endl; // Otherwise, the sum is x + 2
                }
            }
        }
    }

    return 0;
}