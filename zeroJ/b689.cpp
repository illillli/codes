#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define io                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}
int dn[4] = {1, -1, 0, 0};
int dm[4] = {0, 0, 1, -1};
int input[20][20];
int sn, sm;
int n, m;
void solve(int pn, int pm)
{
    input[pn][pm] = 1;
    bool finish = true;
    for (int i = 0; i < 4; i++)
    {
        if (!(pn + dn[i] < 0) && !(pn + dn[i] >= n) && !(pm + dm[i] < 0) && !(pm + dm[i] >= m) && (!(input[pn + dn[i]][pm + dm[i]])))
            finish = false;
    }
    if (finish)
    {
        cout << pn + 1 << ' ' << pm + 1 << '\n';
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        // if ((input[pn + dn[i]]) && (input[pm + dm[i]]))
        //    cout << pn + 1 << ' ' << pm << '\n';
        if ((pn + dn[i] < 0) || (pn + dn[i] >= n) || (pm + dm[i] < 0) || (pm + dm[i] >= m) || (input[pn + dn[i]][pm + dm[i]]))
            continue;
        else
            solve((pn + dn[i]), (pm + dm[i]));
    }
}

int main()
{
    io;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
                input[i][j] = 1;
            else
                input[i][j] = 0;
            //cout << "(" << i << ',' << j << ")"
            //    << "=" << c << '\n';
            if (((i == 0 || i == n - 1) || (j == 0 || j == m - 1)) && c == '.')
                sn = i, sm = j;
        }
    }
    //cout << "sn = " << sn << '\n';
    //cout << "sm = " << sm << '\n';
    solve(sn, sm);
}