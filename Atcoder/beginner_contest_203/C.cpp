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
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    int a, b;
    cin >> a >> b;
    int v = 0;
    cin >> n >> k;
    while (k != 0 && n != 0)
    {
        v++;
        k--;
        //cout << k << endl;
        while (a > v)
        {
            if(n < 2)
                {
                    cout << "noF";
                    break;
                }
            n--;
            k += b;
            cin >> a >> b;
        }
    }
    cout << v + k;
}