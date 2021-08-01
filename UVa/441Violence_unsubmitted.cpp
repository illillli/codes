#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
using namespace std;
#define opti                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void output(ll i)
{
    cout << "--" << i << '\n';
    return;
}

int main()
{
    opti
        ll t;
    ll count = 0;
    while (cin >> t)
    {
        if (t == 0)
        {
            break;
        }
        ll k, a, b, c, d, e, f;
        ll input[t];
        if (count > 0)
            cout << '\n';
        count++;
        for (int i = 0; i < t; i++)
        {
            cin >> input[i];
        }

        for (a = 0; a < t - 5; a++)
        {
            for (b = a + 1; b < t - 4; b++)
            {
                for (c = b + 1; c < t - 3; c++)
                {
                    for (d = c + 1; d < t - 2; d++)
                    {
                        for (e = d + 1; e < t - 1; e++)
                        {
                            for (f = e + 1; f < t; f++)
                            {
                                cout << input[a] << ' ' << input[b] << ' ' << input[c] << ' ' << input[d] << ' ' << input[e] << ' ' << input[f] << '\n';
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}