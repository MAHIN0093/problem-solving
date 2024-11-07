#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << -1 << endl;
        } else {
            string result;
            // Start with `3`, fill with alternating `3` and `6`, and end with `6`
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    result += '3';
                } else {
                    result += '6';
                }
            }

            // Ensure the last character is `6` to maintain divisibility by 2
            result[n - 1] = '6';
            cout << result << endl;
        }
    }

    return 0;
}
