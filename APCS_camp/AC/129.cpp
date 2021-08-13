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
const int maxN = 3e3 + 5;
using namespace std;

int t, n, m;
int a, b;
int arr[maxN];
int dp[maxN][maxN][2]; //0 先手, 1後手
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        {cin >> arr[i];
            dp[i][i][0] = arr[i];
            dp[i][i][1] = -arr[i];
        }
    for (int i = n - 1; i >= 0; i--)
        for (int j = i; j < n; j++)
        {
            dp[i][j][0] = max(arr[i] + dp[i + 1][j][1], arr[j] + dp[i][j - 1][1]);
            dp[i][j][1] = min(-arr[i] + dp[i + 1][j][0], -arr[j] + dp[i][j - 1][0]);
        }
    cout << dp[0][n - 1][0] << endl;
}