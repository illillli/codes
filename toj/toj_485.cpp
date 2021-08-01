#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s, s2;
    cin >> n >> s;
    s2 = s;
    for (int i = 0; i < n; i++)
    {
        s2[i] = s[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        bool notsame = false;

        for (int j = 0; j < n - i; j++)
            if (s2[j] != s[j + i])
            {
                notsame = true;
                break;
            }
        if (!notsame)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n - 1 << endl;
}