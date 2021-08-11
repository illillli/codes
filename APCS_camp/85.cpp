#include <bits/stdc++.h>
#define pb push_back
#define intinf 2147483647
const int maxN = 1e5 + 5;
using namespace std;
int _max = -intinf;
int n;
int a, b;
vector<int> g[maxN];
bool notroot[maxN];
int dfs(int x)
{
    int h1 = 0, h2 = 0;
    for (auto p : g[x])
    {
            int h = dfs(p) + 1;
            if (h > h1)
                h2 = h1, h1 = h;
            else if (h > h2)
                h2 = h;
    }
    _max = max(_max, h1 + h2);
    return h1;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    while (cin >> n)
    {
         for (int i = 0; i < n; i++){
            g[i].clear();
            notroot[i] = false;
        }
        _max = -intinf;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a >> b;
            g[a].pb(b);
            notroot[b] = true;
        }
        /*for (int i = 0; i < n; i++)
        {
            for (auto p : g[i])
                cout << p << ' ';
            cout << endl;
        }*/
        int root = -1;
        for (int i = 0; i < n;i++){
            if(!notroot[i])
                root = i;
        }
        dfs(root);
        cout << _max << endl;
    }
}