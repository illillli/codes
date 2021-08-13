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
using namespace std;

int t, n, m;
int a, b;
string str;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int arr[n][m];
    int dp[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (i == 0 && j == 0)
                dp[i][j] = arr[i][j];
            else if (i == 0)
                dp[i][j] = arr[i][j] + dp[i][j - 1];
            else if (j == 0)
                dp[i][j] = arr[i][j] + dp[i - 1][j];
            else
                dp[i][j] = arr[i][j] + max(dp[i][j - 1], dp[i - 1][j]);
        }
    cout << dp[n - 1][m - 1] << endl;
}