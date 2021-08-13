#include <bits/stdc++.h>
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
const int maxN = 1e6 + 5;
using namespace std;

int q, n;
int a, b;

queue<int> que;
int Max = -1 * intinf;
int arr[maxN];
int ans[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        que.push(i);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }
    for (int i = 1; i <= Max; i++)
    {
        ans[i] = que.front();
        que.pop();
        int temp = que.front();
        que.pop();
        que.push(temp);
    }
    for (int i = 0; i < q;i++){
        cout << ans[arr[i]] << endl;
    }
}