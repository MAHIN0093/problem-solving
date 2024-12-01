#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,l,r,x; int counti = 0; cin >> n>>l>>r>>x;
    vector <ll> list(n);
    for (int i = 0; i < n; i++)
    {
        cin>>list[i];
    }
    for (int mask = 0; mask < 1<<n; mask++)
    {
    ll sum = 0;
    ll maxi = LONG_LONG_MIN;
    ll mini = LONG_LONG_MAX;
        for(int pos = 0; pos < n; pos++){
            if((mask>>pos) & 1){
                sum+=list[pos];
                maxi = max(maxi,list[pos]);
                mini = min(mini,list[pos]);
            }
        } 
        if((l<= sum && sum<=r) && (x <= maxi-mini)){
            counti++;
        }
    }
    cout<<counti<<endl;

    
    
    
   

    return 0;
}