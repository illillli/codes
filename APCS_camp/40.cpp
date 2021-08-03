#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;
int t, n, m;
int DP[550][3050];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    DP[0][0] = 1;
    for (int i = 1; i <= 505; i++) //n
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 0; k <= i * 6; k++) //6n
                DP[i][k + j] += DP[i - 1][k];
        }
    }
    while (t--)
    {
        cin >> n >> m;
        cout << DP[n][m] << endl;
    }
}