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
const int maxN = 1e6 + 5;
using namespace std;

int t, n, m;
int a, b;
int arr[maxN];
int dp[maxN][3]; //0 = -1; 1 = 0; 2 = 1
// 0-base
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            for (int j = 0; j < 3; j++)
                dp[i][j] = arr[i] * (j - 1);
        }
        else
        {
            dp[i][0] = arr[i] * (-1) + max(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = arr[i] + max(dp[i - 1][0], dp[i - 1][1]);
        }
    }
    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << endl;
}