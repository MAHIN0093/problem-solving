#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0); cout.tie(0);

int a; cin>>a;
string vowel = "aeiou";
while(a--){
    
    int n; cin>>n;
    vector<int> v(5,n/5);
    for (int i = 0; i < n%5; i++)
    {
        v[i]++;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;  j< v[i]; j++)
        {
            cout<<vowel[i];
        }
        
    }
    
    cout<<'\n';

}
}
