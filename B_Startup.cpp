#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int numShelves, numBottles;
        cin >> numShelves >> numBottles;
        
        map<int, int> totalPricePerBrand;
        
        // Process each bottle's brand and price
        for (int i = 0; i < numBottles; i++) {
            int brand, price;
            cin >> brand >> price;
            
            // Add the price to the brand's total price
            totalPricePerBrand[brand] += price;
        }
        
        // Collect total prices of all brands and sort them in descending order
        vector<int> brandTotals;
        for (const auto& entry : totalPricePerBrand) {
            brandTotals.push_back(entry.second);
        }
        
        // Sort brand totals in descending order
        sort(brandTotals.rbegin(), brandTotals.rend());
        
        // Calculate the maximum earnings using the top `numShelves` brand totals
        int maxEarnings = 0;
        for (int i = 0; i < min(numShelves, static_cast<int>(brandTotals.size())); i++) {
            maxEarnings += brandTotals[i];
        }
        
        cout << maxEarnings << endl;
    }
    
    return 0;
}
