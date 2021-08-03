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

int t, n;
int l, r;
string s;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> s;
    n = s.size();
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (i - j < 0 || i + j >= n)
                break;
            if (s[i - j] != s[i + j])
                break;
            else
            {
                ans += 2;
                if(j == 0)
                    ans -= 1;
                if (ans > Max)
                {
                    Max = ans;
                    l = i - j + 1;
                    r = i + j + 1;
                }
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        int ans = 0;
        if (s[i] == s[i + 1])
        {
            for (int j = 0; j < n; j++)
            {
                if (i - j < 0 || i + 1 + j >= n)
                    break;
                if (s[i - j] != s[i + 1 + j])
                    break;
                else
                {
                    ans += 2;
                    if (ans > Max)
                    {
                        Max = ans;
                        l = i - j + 1;
                        r = i + j + 2;
                    }
                }
            }
        }
    }

    cout << Max << endl;
    cout << l << ' ' << r << endl;
}