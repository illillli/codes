#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define PB emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 2000 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[N][N];
int dp[N][N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            dp[i][j] = max(max(dp[i + 1][j + 1] + arr[i][j], dp[i][j + 1]), max(dp[i + 1][j], 0ll));
        }
    }
    cout << dp[0][0] << endl;
}