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
const int N = 1e5 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int min = llinf;
    int ans = 0;
    int cnt = 1;
    while (cnt++)
    {
        int t = cnt * (cnt + 1) / 2;
        if (n % (t + 1) == 0)
            ans = cnt + n / (t + 1);
        else
            {
                //cout << "work" << endl;
                ans = cnt + n / (t + 1) + 1;
            }
        //cout << "cnt, ans = " << cnt << ' ' << ans << endl;
        if (ans > min)
        {
            //cout << "B";
            break;
        }
        else
            min = ans;
    }
    cout << min << endl;
}