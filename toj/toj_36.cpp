#include <bits/stdc++.h>
#define ll long long
using namespace std;

void quick(ll a, ll b, ll c)
{
    ll ans = 1;
    for (; b; b >>= 1)
    {
        if (b & 1)
        {
            ans = ans % c * a % c;
        }
        a = a % c * a % c;
    }
    ans %= c;
    cout << ans << '\n';
    return;
}

int main()
{
    ll a, b, c;
    ll ans;
    cin >> a >> b >> c;
    quick(a, b, c);
    return 0;
}