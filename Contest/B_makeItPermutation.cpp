#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        cout << n - 1 << '\n';  // আমরা n-1 টা অপারেশন করব

        for (int i = 2; i <= n; ++i) {
            cout << i << " 1 " << i << '\n';  // i-th row এর প্রথম i টা উপাদান রিভার্স করব
        }
    }

    return 0;
}
