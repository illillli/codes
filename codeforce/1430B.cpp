#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 1e5;
using namespace std;
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.PB(temp);
        }
        sort(v.begin(), v.end(), greater<int>());
        //for (int i = 0; i < n; i++)
        //    cout << v[i] << ' ';
        int ans = 0;
        if (k > v.size())
            k = v.size();
        for (int i = 0; i <= k; ++i)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
}