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
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[90];
string s;
bool chkx[9][10], chky[9][10], chkb[9][10];
void dfs(int i)
{
    if (i == 81)
    {
        for (int i = 0; i < 81; i++)
            cout << arr[i];
        cout << endl;
        exit(0);
    }
    else if (arr[i] != 0)
        dfs(i + 1);
    else
    {
        int x = i % 9, y = i / 9, b = y / 3 * 3 + x / 3;
        for (int j = 1; j <= 9; j++)
        {
            if (!chkb[b][j] && !chkx[x][j] && !chky[y][j])
            {
                arr[i] = j;
                chkb[b][j] = chkx[x][j] = chky[y][j] = 1;
                dfs(i + 1);
                chkb[b][j] = chkx[x][j] = chky[y][j] = 0;
                arr[i] = 0;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    bool fail = false;
    cin >> s;
    for (int i = 0; i < 81; i++)
        if (s[i] == '.')
            arr[i] = 0;
        else
        {
            arr[i] = s[i] - '0';
            int y = i / 9, x = i % 9, b = y / 3 * 3 + x / 3;
            if (chky[y][arr[i]] || chkx[x][arr[i]] || chkb[b][arr[i]])
            {
                fail = true;
                break;
            }
            chky[y][arr[i]] = true;
            chkx[x][arr[i]] = true;
            chkb[b][arr[i]] = true;
        }
    if (!fail)
        dfs(0);
    cout << "No solution." << endl;
    return 0;
}