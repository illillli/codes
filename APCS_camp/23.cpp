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

int t, n, m, k;
int a, b;
int ans[maxN];
deque<int> dq;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        if (k == 1)
        {
            cin >> n;
            dq.emplace_back(n);
        }
        else if (k == 2)
        {
            cin >> n;
            dq.emplace_front(n);
        }
        else if (k == 3)
        {
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "error" << endl;
        }
        else if (k == 4)
        {
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "error" << endl;
        }else if(k == 5){
            if(!dq.empty())
                dq.pop_back();
        }
    }
}