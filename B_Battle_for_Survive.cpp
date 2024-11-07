#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x; cin>>x;
    for (int i = 0; i < x; i++)
    {
        long long t; cin >> t;
        vector <long long> list;
        long long ans = 0;
        for (int i = 0; i < t; i++)
        {
            long long a; cin>>a;
            list.push_back(a);
        }
        int len = list.size();
        for(long long value:list){
            ans += value;
        }
        ans-=(2*list[len-2]);
        cout<<ans<<endl;
    }
    
}