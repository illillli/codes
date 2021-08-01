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
    char a, b;
    cin >> a >> b;
    if (a == 'S')
    {
        if (b == 'A')
            b = '2';
        else if (b == 'T')
            b = 'J';
        else if (b == 'J')
            b = 'Q';
        else if (b == 'Q')
            b = 'K';
        else if (b == 'K')
        {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
        else
            b++;
        a = 'C';
    }
    else if (a == 'H')
        a = 'S';
    else if (a == 'D')
        a = 'H';
    else
        a = 'D';
    cout << a << ' ' << b << endl;
}