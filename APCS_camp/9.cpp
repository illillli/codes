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
const int maxN = 2e5 + 5;
using namespace std;

int t, n, m;
int a, b;
int cnt;
map<int, int> s;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        s[arr[i]]++;
    if (s.size() == m)
        cnt++;
    for (int i = 1; i < n - m + 1; i++)
    {
        s[arr[i - 1]]--;
        s[arr[m - 1 + i]]++;
        if (s[arr[i - 1]] == 0)
            s.erase(arr[i - 1]);
        if (s.size() == m)
            cnt++;
    }
    cout << cnt << endl;
}