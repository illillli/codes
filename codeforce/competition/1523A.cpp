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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if(m > 1005)
            m = 1005;
        char input[n][m + 1];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m + 1; j++)
                input[i][j] = '0';

        for (int i = 0; i < n; i++)
            cin >> input[i][0];
        for (int i = 0; i < m; i++)
        {
            for (int t = 0; t < n;t++){
                input[t][i + 1] = input[t][i];
            }
                if (input[1][i] == '1')
                    input[0][i + 1] = '1';
            if (input[n - 2][i] == '1')
                input[n - 1][i + 1] = '1';
            for (int j = 1; j < n - 1; j++)
            {
                if (input[j - 1][i] != input[j + 1][i])
                    input[j][i + 1] = '1';
                else
                    input[j][i + 1] = input[j][i];
            }
            
        }
        for (int i = 0; i < n; i++)
            cout << input[i][m];
        cout << endl;
    }
}