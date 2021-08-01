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
    ll n;
    cin >> n;
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    ll t;
    cin >> t;
    while (t--)
    {
        ll ask;
        cin >> ask;
        if (*lower_bound(x.begin(), x.end(), ask) == ask)
        {
            cout << ask << '\n';
            continue;
        }
        else if (ask < *x.begin())
        {
            cout << "no " << *x.begin() << '\n';
            continue;
        }
        else if (ask > *(x.end() - 1))
        {
            cout << *(x.end() - 1) << " no\n";
            continue;
        }
        else
        {
            cout << *(lower_bound(x.begin(), x.end(), ask) - 1);
            cout << ' ';
            cout << *(upper_bound(x.begin(), x.end(), ask));
            cout << '\n';
        }
    }
}