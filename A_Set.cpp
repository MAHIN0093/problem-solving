#include <bits/stdc++.h>

using namespace std;

int main() {
int a; cin>>a;
while(a--){
    long long x,y,z,t;long long res=0;
    cin>>x>>y>>z;
    long long count = y/z;
    res= count - x + 1;
    if (res<0) res= 0;
    cout<<res<<endl;
}
}
