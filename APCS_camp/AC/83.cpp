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

int t, n, m;
int a, b;
vector<int> tree[maxN];
vector<int> Gpoint;
int siz[maxN];
void dfs(int fa, int k)
{
    siz[k] = 1;
    bool isG = true;
    for (auto son : tree[k])
    {
        if (!siz[son])
        {
            dfs(k, son);
            siz[k] += siz[son];
        }
        if (siz[son] > n / 2)
        {
            isG = false;
            break;
        }
    }
    if (n - siz[k] > n / 2)
        isG = false;
    if (isG)
        Gpoint.pb(k);
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        tree[a].pb(b);
        tree[b].pb(a);
    }
    dfs(-1, 0);
    sort(Gpoint.begin(), Gpoint.end());
    for (auto temp : Gpoint)
        cout << temp << endl;
}