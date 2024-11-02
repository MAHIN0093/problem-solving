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

    string first;
    string second;
    cin>>first>>second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    if (first>second)
    {
        cout<<1<<endl;
    }
    else if (second>first)
    {
       cout << -1 << endl;
    }
    else
    {
       cout << 0 << endl;
    }
    
}