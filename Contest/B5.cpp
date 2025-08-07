#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        int max_freq = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] > max_freq) {
                max_freq = freq[x];
            }
        }

        cout << max_freq << '\n';
    }

    return 0;
}
