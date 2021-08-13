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
const int maxN = 2e5 + 5;
using namespace std;

int n, m;
vector<int> v;
int arr[maxN];
bool chk(int t)
{
    int cnt = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > t)
            return false;
        temp += arr[i];
        if (temp > t)
            temp = arr[i], cnt++;
        if (cnt > m)
            return false;
    }
    if (temp)
        cnt++;
    if (cnt > m)
        return false;
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int SUM = 0;
    int Max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        SUM += arr[i];
        Max = max(Max, arr[i]);
    }
    int l = Max, r = SUM;
    while (l != r)
    {
        int mid = l + (r - l) / 2;
        if (chk(mid))
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << endl;
}