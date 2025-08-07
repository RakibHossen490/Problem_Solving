#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int sum = a + b + c;
        
        if (sum % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }
        
        int target = sum / 3;
        
        if (target >= a && target >= b && target <= c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
