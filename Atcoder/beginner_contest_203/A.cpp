#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    multiset<int> u;
    u.insert(a);
    u.insert(b);
    u.insert(c);
    if (u.count(a) == 1 && u.count(b) == 1)
    {
        cout << 0 << endl;
    }
    else if (u.count(a) != 1)
    {
        if (a == b)
            cout << c << endl;
        else
            cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }
}