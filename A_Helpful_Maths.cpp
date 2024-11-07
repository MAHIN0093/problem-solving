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
string seq;
cin>>seq;
int len = seq.size();
vector<int> words;
for (int i = 0; i < len; i+=2)
{
    int num = seq[i];
    words.push_back(num);
}
sort(words.begin(), words.end());
int char_len= words.size();

for (int i = 0, j= 0; i < len, j<char_len; i+=2, j++)
{
    seq[i]= words[j];
}
cout<<seq<<endl;
}