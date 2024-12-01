#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s, t; 
    cin >> s >> t;

    int cnt0 = count(s.begin(), s.end(), '0'), cnt1 = n - cnt0;
    for (int i = 0; i < n - 1; i++) {
        if (cnt0 == 0 || cnt1 == 0) {
            cout << "NO" << endl;
            return;
        }
        if (t[i] == '1') cnt0--;
        else cnt1--;
    }
    cout << "YES" << endl;
}

int main() {
    int T; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}