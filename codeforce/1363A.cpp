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
const int N = 1e3 + 5;
using namespace std;

int t;
int x, n;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }

        if (odd == 0 || (even == 0 && x % 2 == 0) || (n == x && odd % 2 == 0))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}