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

int q, n;
int a[maxN], b[maxN];
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> q;
    while(q--){
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n;i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int m = 0, M = 0;
        for (int i = 0; i < n;i++){
            M += a[i] * b[i];
            m += a[i] * b[n - 1 - i];
        }
        cout << M << ' ' << m << endl;
    }
}