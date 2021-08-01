#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll s = (ll)sqrt(2 * n);
        if (s % 2) // odd
        {
            if (s == 1)
                cout << "0\n";
            else
                cout << s / 2 << '\n';
            continue;
        }

        else
            cout << s / 2 - 1 << '\n';
    }
}