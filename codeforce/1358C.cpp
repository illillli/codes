#include <bits/stdc++.h>
#define int long long
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 2e5 + 5;
using namespace std;

int t, n, l, r;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int ans = 0;
        int m = (l + r) / 2;
        for (int i = 0; i < n; i++)
        {
            int _ll = lower_bound(arr + i+1, arr + n, l - arr[i]) - arr;
            int ur = upper_bound(arr + i + 1, arr + n, r - arr[i]) - arr;
            //cout << lr << ' ' << _ll << ' ' << ur << ' ' << ul << endl;
            ans += ur - _ll;
        }
        cout << ans << endl;
    }
}