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
int a[805][805];

bool greater(int a, int b)
{
    return a > b;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int q = k * k / 2 + 1;
    int s[4];
    vector<int> v[4];
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            v[1].PB(a[i][j]);
        }
    }
    for (int i = n - k + 1; i <= n; i++)
    {
        for (int j = n - k + 1; j <= n; j++)
            v[2].PB(a[i][j]);
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = n - k + 1; j <= n; j++)
            v[3].PB(a[i][j]);
    }
    for (int i = n - k + 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            v[0].PB(a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
        sort(v[i].begin(), v[i].end());

    //cout << "size" << v[1].size() << endl;

    for (int i = 0; i < 4; i++)
    {
        s[i] = v[i].at(k * k - q);
        //cout << s[i] << endl;
    }
    cout << min(min(s[0], s[1]), min(s[2], s[3])) << endl;
}