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
const int N = 2e6 + 5;
using namespace std;
int bit[N];
int n;
int arr[N];
int ans;
void modify(int x)
{
    for (int i = x; i < n; i += (i & -i))
        bit[i]++;
};
int query(int x)
{
    int sum = 0;
    for (int i = x; i > 0; i -= (i & -i))
        sum += bit[i];
    return sum;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ans += query(arr[i] - 1);
        modify(arr[i]);
    }
    cout << ans << endl;
}