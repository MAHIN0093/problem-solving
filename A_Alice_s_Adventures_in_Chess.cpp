#include <bits/stdc++.h>

using namespace std;

int main() {
int a; cin>>a;
while(a--){
    int n,p,q; cin>>n>>p>>q; int x = 0,y = 0, z = 1000;
    string seq;
    cin>>seq;
    while(z--){
    for (int i = 0; i < n; i++)
    {
        if (seq[i]=='N') y++; else if (seq[i]=='E') x++; else if (seq[i]=='W') x--; else if (seq[i]=='S') y--;if ((x==p) && (y==q)){
        break;
    }
    }
    if ((x==p) && (y==q)){
        break;
    }
    }
    if((x==p) && (y==q)){
    cout<<"YES"<<endl;
    } 
    else cout<<"NO"<<endl;
}
}
