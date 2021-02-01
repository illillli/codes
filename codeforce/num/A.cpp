#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll sum = (x * (x + 1) / 2);
        ll sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (temp <= x)
            {
                sum2 += temp;
            }
        }
        cout << sum - 2 * sum2 << '\n';
    }
}