#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define endl "\n"
const int maxN = 5005;
using namespace std;

int n, ans;
int sum;
vector<int> v;
int dp[maxN][maxN];
int fro[maxN];
int a[maxN], b[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int Max = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        dp[i][i] = a[i] * b[i];
        Max += dp[i][i];
        if (i)
            fro[i] = fro[i - 1] + dp[i][i];
        else
            fro[i] = dp[i][i];
    }
    int ans = Max;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            dp[i][j] = dp[i + 1][j - 1] + a[i] * b[j] + a[j] * b[i];
            ans = max(ans, Max - (fro[j] - (i > 0) * fro[i - 1]) + dp[i][j]);
        }
    }
    cout << ans << endl;
}