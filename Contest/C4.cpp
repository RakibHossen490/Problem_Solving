#include <iostream>
using namespace std;

void flush() {
    cout.flush();
}

int send(string cmd) {
    cout << cmd << endl;
    flush();
    int res;
    cin >> res;
    if (res == -1) exit(0); // invalid command or too many commands
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Step 1: Use 'digit' command to reduce x
        for (int i = 0; i < 3; ++i) {
            send("digit");
        }

        // Step 2: Try simple multipliers and dividers to reach close to n
        bool done = false;
        for (int mul = 1; mul <= 100 && !done; ++mul) {
            if (send("mul " + to_string(mul)) == 1) {
                for (int div = 1; div <= 100 && !done; ++div) {
                    if (send("div " + to_string(div)) == 1) {
                        // Try to match current x to n using add
                        long long add_val = n;
                        send("add " + to_string(add_val));
                        done = true;
                    }
                }
            }
        }

        // Final check
        cout << "!" << endl;
        flush();
        int final_response;
        cin >> final_response;
        if (final_response == -1) exit(0); // incorrect answer
    }

    return 0;
}
