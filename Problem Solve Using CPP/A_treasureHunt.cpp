#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long depth = a * 5;
        long long total_dug = 0;
        bool is_b_turn = true;

        while (true) {
            if (is_b_turn) {
                total_dug += x;
                if (total_dug > depth) {
                    cout << "NO" << endl; // B dug it
                    break;
                }
            } else {
                total_dug += y;
                if (total_dug > depth) {
                    cout << "YES" << endl; // K dug it
                    break;
                }
            }
            is_b_turn = !is_b_turn;
        }
    }

    return 0;
}
