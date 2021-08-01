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
using namespace std;
const int N = 1e5 + 5;
int n, ans;
int a[N];

void mergesort(int A[], int l, int r)
{
    if (l == r)
        return;
    int m = (l + r) >> 1;
    mergesort(A, l, m);
    mergesort(A, m + 1, r);
    int j = m + 1;
    int temp[r - l + 1];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        while (j <= r && A[i] > A[j])
        {
            ans += m - i + 1;
            temp[k++] = A[j++];
        }
        temp[k++] = A[i];
    }
    for (int i = l; i < j; i++)
        A[i] = temp[i - l];
};

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int cnt = 0;
    while (cin >> n && n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mergesort(a, 0, n - 1);
        cout << "Case #" << ++cnt << ": " << ans << endl;

        ans = 0;
    }
}