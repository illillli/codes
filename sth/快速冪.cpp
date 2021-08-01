#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

ll ans = 1;
void fast(ll a, ll b, ll c)
{
    while (b)
    {
        if (b & 1)
            ans = ans * a % c;
        a = a * a % c;
        b = b >> 1;
    }
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    fast(a, b, c);
    cout << ans;
}