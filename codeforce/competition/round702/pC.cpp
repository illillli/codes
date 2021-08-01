#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
vector<ll> cube;
void output(ll i)
{
    cout << "--" << i << '\n';
}
void cal()
{
    for (ll i = 1; i <= (ll)(1e4 + 5); i++)
    {
        ll m = i * i * i;
        output(i);
        for (ll j = 1; j <= i; j++)
        {
            ll k = m + j * j * j;
            cube.emplace_back(k);
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    cal();
    while (t--)
    {
        ll n;
        cin >> n;
        if (*lower_bound(cube.begin(), cube.end(), n) == n)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}