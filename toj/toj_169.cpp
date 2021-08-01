#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
ll t;

void solve()
{
    vector<ll> a, v; // a -> input, v-> ans
    ll n = t;
    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << ' ';
        ll temp;
        cin >> temp;
        cout << temp << "\n";

        a.PB(temp);
        while (temp > a.at(v.back()) && !v.empty())
        {
            v.pop_back();
        }
        if (v.empty())
            cout << i << "\n";
        else
            cout << i - v.back() << "\n";
        v.PB(i);
    }
}

int main()
{
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    while (cin >> t)
    {
        cout << t << "\n";
        solve();
    }
}