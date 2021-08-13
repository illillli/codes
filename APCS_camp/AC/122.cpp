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

int q, n, m;
int a, b;
int ans[maxN];
string str;
vector<vector<int>> v, dp;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m >> q;
    v.resize(n);
    dp.resize(n);
    for (int i = 0; i < n; i++)
    {
        v[i].resize(m);
        dp[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j])
                dp[i][j] = 0;
            else if (i == 0 && j == 0)
                dp[i][j] = 1;
            else if (i == 0)
                dp[i][j] = dp[i][j - 1];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            dp[i][j] %= mod;
        }}
    for (int i = 0; i < q;i++){
        cin >> a >> b;
        cout << dp[a][b] << endl;
    }
}