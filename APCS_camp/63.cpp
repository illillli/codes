#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define pb emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define pi acos(-1)
const int maxN = 1e5 + 5;
using namespace std;

int t, n, m;
vector<int> v;
int a[maxN], b[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] = a[i] - b[i];
    }
    sort(b, b + n);
    sum -= m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= b[i];
        if (sum >= 0)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
}