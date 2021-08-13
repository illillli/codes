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
const int maxN = 1000 + 5;
using namespace std;
bool cmp(const pll a, const pll b)
{
    if (a.F != b.F)
        return a.F < b.F;
    else
        return a.S > b.S;
};

int t, n, m;
int a, b;
pll ans[maxN];
string input;
pll arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[i] = mp(a, b);
    }
    sort(arr, arr + n, cmp);
    /*for (int i = 0; i < n; i++)
    {
        cout << arr[i].F << ' ' << arr[i].S << endl;
    }
    cout << endl
         << endl;*/
    int curr = arr[0].S, cnt = 1, right = 0;
    // curr : 目前覆蓋的最右界
    // right : 可選擇線段中的最右界
    bool unlink = false;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].F > curr + 1)
        {
            if (arr[i].F > right + 1)
            {
                unlink = true;
                break;
            }
            cnt++, curr = right;
        }
        right = max(right, arr[i].S);
    }
    if (right > curr)
        cnt++;
    if (unlink)
        cout << -1 << endl;
    else
        cout << cnt << endl;
}