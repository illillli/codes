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

int W, N, m;
int a, b;
int w[maxN],v[maxN];
int dp[2][maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> N >> W;
    for (int i = 1; i <= N;i++)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= W;i++)
        dp[0][i] = -intinf;
        int cur = 1, last = 0;
    dp[0][0] = 0;
    for (int i = 1; i <= N;i++){
        for (int j = 0; j <= W;j++){
            dp[cur][j] = dp[last][j]; //不取
            if(j >= w[i])
                dp[cur][j] = max(dp[cur][j], dp[last][j - w[i]] + v[i]); //取
        }
        swap(last, cur);
    }
    int Max = -1;
    for (int i = 0; i <= W;i++)
        Max = max(Max, dp[last][i]);
    cout << Max << endl;
}