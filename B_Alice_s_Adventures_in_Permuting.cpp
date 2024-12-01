#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a; cin >> a;
    while (a--) {
        int n, b, c; cin>>n>>b>>c;
        vector<int> list;
        for (int i = 0; i < n; i++)
        {
            int a = b*i+c;
            list.push_back(a);
        }
        
        
    }

    return 0;
}