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
const int maxN = 1e5 + 5;
using namespace std;

int t, n;
int a, b;
queue<int> q;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            int k;
            cin >> k;
            q.push(k);
        }
        else if (n == 2)
        {
            if (!q.empty())
                q.pop();
            else
                cout << "QQ" << endl;
        }
        else if (n == 3)
        {
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "QQ" << endl;
        }
        else
        {
            cout << q.size() << endl;
        }
    }
}