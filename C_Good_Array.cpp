#include <bits/stdc++.h>

#define ll long long
#define int ll
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    multimap<int, int> mmp;
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        mmp.insert({arr[i], i});
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int tar = sum - arr[i];
        if (tar & 1)
            continue;
        tar /= 2;
        auto it = mmp.find(tar);
        if (it != mmp.end())
        {
            while (it != mmp.end() && it->first == tar)
            {
                if (it->second != i)
                {
                    ans.push_back(i + 1);
                    break;
                }
                it++;
            }
        }
    }
    cout << ans.size() << endl;
    for (auto ele : ans)
    {
        cout << ele << ' ';
    }
    return 0;
}