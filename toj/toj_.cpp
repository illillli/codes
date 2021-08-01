#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}

int main()
{
    ll t;
    while (cin >> t)
    {
        ll res[t + 1];
        ll dp[t + 1][2];
        for (int i = 1; i <= t; i++)
            cin >> res[i];
        dp[1][1] = res[1];
        dp[1][0] = 0;
        for (int i = 2; i <= t; i++)
        {
            dp[i][1] = dp[i - 1][0] + res[i];
            dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]);
        }
        cout << max(dp[t][1], dp[t][0]) << '\n';
    }
}