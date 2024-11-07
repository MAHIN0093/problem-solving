#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        
        vector<vector<int>> matrix(n, vector<int>(n));
        
        // Read matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        
        // Track the minimum value for each diagonal using a map
        unordered_map<int, int> diagonal_minimums;
        
        // Find the minimum (most negative) height in each diagonal
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int diag_id = i - j;
                if (matrix[i][j] < 0) {
                    if (diagonal_minimums.find(diag_id) == diagonal_minimums.end()) {
                        // Initialize with the first negative value found
                        diagonal_minimums[diag_id] = matrix[i][j];
                    } else {
                        // Update to the most negative value on this diagonal
                        diagonal_minimums[diag_id] = min(diagonal_minimums[diag_id], matrix[i][j]);
                    }
                }
            }
        }
        
        // Calculate the total operations needed
        int operations = 0;
        for (const auto& [diag_id, min_value] : diagonal_minimums) {
            // If the minimum value is negative, add the absolute of that value as the operations needed
            if (min_value < 0) {
                operations += -min_value;
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
}
