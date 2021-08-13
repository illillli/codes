#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define PB emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;

int frq[200], kinds;
int n;
int anslen = intinf, ansL = -1, ansR;
string s;

inline void add(char c)
{
    if (!frq[(int)(c)])
        kinds++;
    frq[(int)(c)]++;
}
inline void del(char c)
{
    frq[(int)(c)]--;
    if (!frq[(int)(c)])
        kinds--;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int r = 0;
    cin >> s;
    n = s.size();
    for (int l = 0; l < n; l++)
    {
        while (r < n && kinds < 26)
        {
            add(s[r++]);
        }
        if (kinds == 26)
        {
            if (anslen > r - l)
                ansL = l, anslen = r - l;
        }
        if (l < r)
            del(s[l]);
    }
    cout << (ansL == -1 ? "QQ" : s.substr(ansL, anslen)) << endl;
}