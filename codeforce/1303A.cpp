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
const int N = 1e5;
using namespace std;

string s;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        bool begi = true;
        int cnt = 0, b = 0, e = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                begi = false;
            if (s[i] == '0')
            {
                cnt++;
                if (begi)
                    b++;
            }
        }
        bool en = true;
        for (int i = s.length() - 1; i > 0; i--)
        {
            if (s[i] == '1')
                en = false;
            if (s[i] == '0' && en)
                e++;
        }
        if (cnt - b - e <= 0)
            cout << '0' << endl;
        else
            cout << cnt - b - e << endl;
    }
}