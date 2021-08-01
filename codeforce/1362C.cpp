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
int p[65];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    p[0] = 1;
    for (int i = 1; i < 64;i++){
        p[i] = p[i - 1] * 2 + 1;
    }
        cin >> t;
    while(t--){
        cin >> n;
        int ans = 0;
        int i = 0;
        while(n>0){
            if(n & 1)
                ans += p[i];
            n >>= 1;
            i++;
        }
        cout << ans << endl;
        }
}