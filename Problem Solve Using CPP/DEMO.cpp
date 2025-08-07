#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // For controlling decimal precision

using namespace std;

int main() {
    vector<long long> numbers;
    long long num;

    // Read all input numbers and store them in a vector
    while (cin >> num) {
        numbers.push_back(num);
    }

    // Print the square root of each number in reverse order
    cout << fixed << setprecision(4); // Ensure 4 decimal places for output
    for (int i = numbers.size() - 1; i >= 0; --i) {
        cout << sqrt(numbers[i]) << endl;
    }

    return 0;
}