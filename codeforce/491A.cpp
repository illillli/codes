#include <bits/stdc++.h>
#define int long long
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 1e5 + 5;
using namespace std;

int t, n;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;
    int n = a + b + 1;
    for (int i = b+1; i >0;i--)
        cout << i << ' ';
    for (int i = b+2; i <= n;i++)
        cout << i << ' ';
    cout << endl;
}