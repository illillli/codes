#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
ll n;

void solve()
{
    ll b, w;
    ll b_wmin = llinf;
    ll w_bmin = llinf; //b-w min
    ll ans = 0;
    ll cntb = 0, cntw = 0, same = 0;
    ll _n = n;
    for (ll i = 0; i < n; i++)
    {
        cin >> b >> w;

        if (n == 1)
        {
            if (b != 0 && w != 0)
            {
                cout << "-1\n";
                return;
            }
            else
            {
                cout << "0\n";
                return;
            }
        }

        if (b - w < b_wmin && b - w > 0)
            b_wmin = b - w;
        //cout << "b-wmin = " << b_wmin << '\n';
        if (w - b < w_bmin && w - b > 0)
            w_bmin = w - b;
        //cout << "w-bmin = " << w_bmin << '\n';

        if (b > w)
        {
            cntw++;
            ans += w;
        }
        else if (b < w)
        {
            cntb++;
            ans += b;
        }
        else if (b == w)
        {
            ans += b;
            same++;
        }
    }
    if (cntb == 0 && same == 0)
        ans += b_wmin;
    else if (cntw == 0 && same == 0)
        ans += w_bmin;

    cout << ans << '\n';
    return;
}

int main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (/*cout << "cin >> n \n",*/ cin >> n)
    {

        if (n == 0)
            break;

        solve();
    }
}