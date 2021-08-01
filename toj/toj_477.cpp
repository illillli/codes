#include <bits/stdc++.h>
#define ll long long
#define rep(n) for (int(i) = 0; (i) < n; (i)++)
#define endl "\n"

using namespace std;

bool cmp(ll k, ll l)
{
    return k > l;
}

ll n, k, x, a[1000010], b[1000010];
ll space, sum;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k >> x; //背包數，容量，搬移費用/物
    rep(n) cin >> a[i]; //格子租金
    rep(n)
    {
        cin >> b[i];
        space += k - b[i];
        sum += a[i];
        a[i] = a[i] - b[i] * x; //a[i]換成當格子清空時，省下的錢
    }

    sort(a, a + n, cmp);
    /*debug
    cout << "-----" << endl;
    rep(n) cout << a[i] << ' ';
    cout << "-----" << endl;
    //end of debug*/
    rep(n)
    {
        if (a[i] < 0)
            break;

        if (space >= k)
        { // 清空此背包
            space -= k;
            sum -= a[i];
        }
    }
    cout << sum << endl;
    return 0;
}