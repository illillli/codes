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
const int N = 1e5;
using namespace std;

int t, n, m;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    
    while(t--){
        cin >> n >> m;
        int ans = 0;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                char a;
                cin >> a;
                if(j == m-1){
                    if(a == 'R')
                        ans++;
                }
                if(i == n-1){
                    if (a == 'D')
                        ans++;
                }
            }
        }
        cout << ans << endl;
    }
}  