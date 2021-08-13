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
const int maxN = 2e5 + 5;
using namespace std;

int t, m;
int a, b;
int arr[maxN];
int f(int n, int k)
{
    if (k == 0)
        return 0;
    return (m + f(n - 1, k - 1)) % n;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> m >> k;
    cout << f(n, k) + 1 << endl;
}