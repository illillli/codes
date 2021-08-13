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
using namespace std;

int t, n, m;
int a, b;
int arr[105];

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        queue<int> q, line;
        int cnt[15] = {0};
        int ans = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            line.push(i);
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        for (int i = 9; i > 0; i--)
        {
            for (int j = 0; j < cnt[i]; j++)
                q.push(i); // 優先級照此順序
        }
        //cout << "* " << q.size() << endl;
        while (!q.empty())
        {
            if (arr[line.front()] == q.front())
            {
                if (line.front() == m)
                    break;
                else
                {
                    ans++;
                    q.pop();
                    line.pop();
                }
            }
            else
            {
                int k2 = line.front();
                line.pop();
                line.push(k2);
            }
        }
        ans++;
        cout << ans << endl;
    }
}