#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll bin_ex(ll b, ll p)
{
    if (p == 0)
        return 1;
    ll half_ans = bin_ex(b, p / 2);
    if (p & 1)
    {
        return half_ans * half_ans * b;
    }
    return half_ans * half_ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int b, p;
    while (cin >> b >> p)
    {
        if (b == -1 && p == -1)
            break;
        cout << bin_ex(b, p) << endl;
    }
    return 0;
}