#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;

int t;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        int n, Q;
        map<int, int> m;
        cin >> n >> Q;
        queue<int> q[n], group;

        for (int i = 0; i < n; i++)
        {
            int C;
            cin >> C;
            while (C--)
            {
                int temp;
                cin >> temp;
                m[temp] = i;
            }
        }
        set<int> ingroup;
        while (Q--)
        {
            int a, b;
            cin >> a;
            if (a == 1)
            {
                cin >> b;
                int id = m[b];
                if (ingroup.count(id))
                {
                    q[id].push(b);
                }
                else
                {
                    group.push(id);
                    q[id].push(b);
                    ingroup.insert(id);
                }
            }
            else
            {
                if (group.size())
                {
                    cout << q[group.front()].front() << endl;
                    q[group.front()].pop();
                    if (q[group.front()].empty())
                    {
                        ingroup.erase(group.front());
                        group.pop();
                    }
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
}