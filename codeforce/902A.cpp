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

int m, n;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n;i++){
        int a, b;

        cin >> a >> b;
        if(ans>=a)
            ans = max(ans, b);
        
    }
    if(ans >= m)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
}