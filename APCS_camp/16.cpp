#include <bits/stdc++.h>
#define int long long
#define pb emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 1e5 + 5;
using namespace std;

int t, n, m;
int a, b;
vector<int> v;
int arr[maxN];
stack<int> s;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> m;
    while (m--)
    {
        cin >> n;
        if (n == 1)
        {
            int k;
            cin >> k;
            s.emplace(k);
        }
        else if (n == 2)
        {
            if (s.size())
                s.pop();
            else
                cout << "QQ" << endl;
        }
        else if (n == 3)
        {
            if (s.empty())
                cout << "QQ" << endl;
            else
                cout << s.top() << endl;
        }else
            cout << s.size() << endl;
    }
}