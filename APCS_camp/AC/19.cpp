#include <bits/stdc++.h>
#define int long long
#define pii pair<long long, long long>
#define PB emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 3e5 + 5;
using namespace std;

int t, n;
int a, b;
stack<pii> s1, s2;
int Max = -1 * intinf;
int arr[maxN];
int sum[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    s1.push(mp(0, arr[0]));
    for (int i = 1; i < n; i++)
    {
        while (!s1.empty() && s1.top().S >= arr[i])
        {
            s1.pop();
        }
        if (!s1.empty())
            sum[i] += (i - s1.top().F - 1);
        else
            sum[i] += i;
        s1.push(mp(i, arr[i]));
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << ' ';
    }
    cout << endl;
    */
    s2.push(mp(n - 1, arr[n - 1]));
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s2.empty() && s2.top().S >= arr[i])
        {
            s2.pop();
        }
        if (!s2.empty())
            sum[i] += (s2.top().F - i - 1);
        else
            sum[i] += n - i - 1;
        s2.push(mp(i, arr[i]));
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << ' ';
    }
    cout << endl;
    */
    for (int i = 0; i < n; i++)
    {
        sum[i] = (sum[i] + 1) * arr[i];
        Max = max(sum[i], Max);
    }
    cout << Max << endl;
}