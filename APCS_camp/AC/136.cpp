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
const int maxN = 1e3 + 5;
using namespace std;

int t, n, m, l;
int a, b;
int arr[maxN];
bool dp[31][maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> l >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            for (int j = 0; j <= l;j++){
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= l; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= arr[i])
                    dp[i][j] |= dp[i - 1][j - arr[i]];
            }
        }
        if (dp[n][l])
            cout << "TAK" << endl;
        else
            cout << "NO" << endl;
    }
}