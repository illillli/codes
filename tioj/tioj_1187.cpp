#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define pi acos(-1)
using namespace std;
int M, m, sum = 0;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    while (cin >> n)
    {
        M = 0, m = 0, sum = 0;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {

            int temp;
            cin >> temp;

            if (i == 0)
                m = temp, M = temp;
            sum += temp;
            if (temp < m)
                m = temp;
            if (temp > M)
                M = temp;
        }
        //cout << "M = " << M << " m = " << m << endl;
        long double ave;
        ave = sum - m - M;
        ave /= (n - 2);
        cout << fixed << setprecision(2) << ave << endl;
    }
}