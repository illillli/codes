#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define double long double
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}

ll n, k, m, p, q;
int main()
{
    cin >> n >> k;
    ll prey[n];
    for (int i = 0; i < n; i++)
        cin >> prey[i];
    sort(prey, prey + n);
    cin >> m;
    while (m--)
    {
        ll sum;
        cin >> p >> q;
        ll num_p = 0, num_q = 0;
        num_p = upper_bound(prey, prey + n, p) - lower_bound(prey, prey + n, p);
        num_q = upper_bound(prey, prey + n, q) - lower_bound(prey, prey + n, q);
        sum = (lower_bound(prey, prey + n, q) - lower_bound(prey, prey + n, p)) + num_q;
        cout << fixed << setprecision(k) << (double)(((double)sum * 100.0) / (double)n) << "%\n";
    }
}