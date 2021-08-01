#include <bits/stdc++.h>
//#include <bits/extc++.h>
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
const int maxN = 1e5 + 5;
using namespace std;

int m, n;
int a, b;
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int ans = 0;
    cin >> m;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        ans += 1966 * 2;
    }
    ans += 1959 * n;
    cout << ans << endl;
}