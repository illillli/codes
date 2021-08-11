#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define pb emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 2e5 + 5;
using namespace std;

int t, n, m;
int w[maxN], f[maxN], prefix[maxN];
pll arr[maxN];
string str;
bool cmp(pll &a, pll &b)
{
    return a.F * b.S < a.S * b.F;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        arr[i] = mp(w[i], f[i]);
    }
    sort(arr, arr + n, cmp);
    prefix[0] = arr[0].F;
    for (int i = 1; i < n;i++){
        prefix[i] = prefix[i - 1] + arr[i].F;
        ans += prefix[i - 1] * arr[i].S;
    }
    cout << ans << endl;
}