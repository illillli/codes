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
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            ll temp = x*(1 << i);
            sum += temp;
           if (sum > (int)(1e9 + 7))
            {
                sum = sum % (int)(1e9 + 7);
            }
        }
        cout << sum << '\n';
    }
}