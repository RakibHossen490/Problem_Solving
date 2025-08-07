#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // টেস্ট কেস সংখ্যা

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int clones = 1; // প্রথম clone তৈরি করলাম
        int i = n - 1;

        // Step 1: সর্বশেষ বাটন থেকে শুরু করে যতক্ষণ non-increasing, ততদূর যাই
        while (i > 0 && a[i - 1] >= a[i]) {
            i--;
        }

        // Step 2: এরপর যতবার increase পাওয়া যাবে, ততবার নতুন clone লাগবে
        while (i > 0) {
            clones++; // নতুন একটি clone তৈরি
            // আবার যতদূর non-increasing পাওয়া যায়, সেদিকে যাই
            while (i > 0 && a[i - 1] >= a[i]) {
                i--;
            }
            // এরপর আবার যদি increase থাকে, আবার clone লাগবে, এভাবে চলবে
            while (i > 0 && a[i - 1] <= a[i]) {
                i--;
            }
        }

        cout << clones << '\n';
    }

    return 0;
}
