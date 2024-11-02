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
    int testcases;
    do
    {
        cin>>testcases;
    } while (testcases < 1 or testcases > 500);
    

for (int i = 0; i < testcases; i++)
{
    int lights;
    int onSwitch = 0;
    int min;
    int max;
    do
    {
        cin>>lights;
    } while (lights < 1 or lights>50);
    
    
    for (int i = 0; i < (lights * 2); i++)
    {
        int toggleState;
        cin>> toggleState;
        if (toggleState == 1){
            onSwitch++;
        }
    }

    if (onSwitch % 2 == 0)
    {
        min = 0;
    }
    else
    {
        min = 1;
    }

    if (onSwitch > lights)
    {
        max = (lights * 2) - onSwitch; 
    }
    else
    {
        max = onSwitch;
    }
    
    
     cout << min << " " << max << endl;
    
}


}