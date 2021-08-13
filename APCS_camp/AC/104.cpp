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
const int maxN = 1e5 + 5;
using namespace std;

int t, n, m;
int a, b;
int ans = 0;
string str;
int arr[maxN];
void mergesort(int (&A)[maxN], int l, int r)
{
    int m = l + (r - l) / 2;
    if (l == r)
        return;
    mergesort(A, l, m);
    mergesort(A, m + 1, r);
    int j = m + 1, k = 0;
    int temp[r - l + 1];
    for (int i = l; i <= m; i++)
    {
        while (j <= r && A[i] > A[j])
        {
            temp[k++] = A[j++];
            ans += m - i + 1;
        }
        temp[k++] = A[i];
    }
    for (int i = l; i < j; i++)
    {
        A[i] = temp[i - l];
    }
    /*for (int i = 0; i < n;i++)
        cout << "*" << l << "*" << r << ' ' <<  arr[i] << ' ';
    cout << endl;*/
};

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergesort(arr, 0, n - 1);
    cout << ans << endl;
}