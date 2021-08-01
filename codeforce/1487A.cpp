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
ll temp;
ll pre;
ll coun;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        coun = 0;
        cin >> n;
        ll n_ = n;
        while (n_--)
        {
            cin >> temp;
            if (n_ == n - 1)
            {
                pre = temp;
                coun = 1;
                continue;
            }
            if (temp < pre)
            {
                pre = temp;
                coun = 1;
                continue;
            }
            if (temp == pre)
                coun++;
        }
        cout << (int)(n - coun) << '\n';
    }
}