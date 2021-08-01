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
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A, B;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                A = i;
            else if (a == n)
                B = i;
        }
        //cout << A << ' ' << B << endl;
        if(A>B)
            swap(A, B);
        cout << min(B, min(n - A + 1, A + n - B + 1)) << endl;
    }
}