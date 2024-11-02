#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <climits>
#include <cstring>
#include <iomanip>
#include <utility>
#include <numeric>
#include <tuple>

using namespace std;

int main() {
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        int k;
        cin>>k;
        vector<int> num; 
        for (int i = 0; i < k; i++)
        {
            int d;
            cin>>d;
            num.push_back(d);
        }
        int len = num.size();
        int toggle = 0;
        for (int i = 0; i < len-1; i++)
        {
            int result = num.at(i)- num.at(i+1);
            int res = abs(result);
            if (res != 5 and res != 7)
            {
                toggle=1;
            }
            
        }
        if (toggle == 1)
        {
            cout << "NO" << endl;
        }
        else if (toggle == 0)
        {
            cout << "YES" << endl;

        }
        
        
    }
    
}