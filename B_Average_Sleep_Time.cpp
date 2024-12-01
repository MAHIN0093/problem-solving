#include <bits/stdc++.h>

#define ll long long
#define ld double

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ld n, k;
    cin >> n >> k;
    vector<ld> arr(n);
    ld sum = 0;
    ld csum = 0;
    ld avg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i < k)
            csum += arr[i];
    }
    sum += csum;
    int tt = 0, hh = k - 1;
    while (hh + 1 < n)
    {
        hh++;
        csum += arr[hh];
        csum -= arr[tt];
        tt++;
        sum += csum;
    }
    avg = sum / (n - k + 1);
    cout << fixed << setprecision(10) << avg << endl;

    return 0;
}