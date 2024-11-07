#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    for (int test_case = 0; test_case < t; test_case++) {
        int n, m;
        cin >> n >> m;

        // Initialize `current_max` to a very low value
        int current_max = INT_MIN;
        
        // Read the array and find the initial max value
        for (int i = 0; i < n; i++) {
            int a; 
            cin >> a;
            if (a > current_max) {
                current_max = a;
            }
        }
        
        // Process each operation
        for (int j = 0; j < m; j++) {
            char op;
            int l, r;
            cin >> op >> l >> r;
            
            // Only update `current_max` if it's within the range [l, r]
            if (l <= current_max && current_max <= r) {
                if (op == '+') {
                    current_max++;
                } else if (op == '-') {
                    current_max--;
                }
            }
            
            // Output the current max after this operation
            cout << current_max;
            if (j < m - 1) cout << " ";  // Space between operations
        }
        cout << '\n';  // End line after all operations in this test case
    }
    
    return 0;
}
