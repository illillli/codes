#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define pb emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 1e5 + 5;
using namespace std;

int t, n, m;
int a, b;
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<bool> use(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
            use[i] = true;
        for (int i = m; i < n; i++)
            use[i] = false;
        do
        {
            for (int i = 0; i < n; i++)
            {
                if (use[i])
                    cout << arr[i] << ' ';
            }
            cout << endl;
        } while (prev_permutation(use.begin(), use.end()));
    }
}
