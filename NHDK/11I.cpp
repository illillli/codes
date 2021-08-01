#include <bits/stdc++.h>
//#include <bits/extc++.h>
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
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    int k = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= 60; i++)
    {
        if (i % 3 == 0)
        {
            arr[i] = k *= 3;
        }
        else
            arr[i] = 2 * arr[i - 2];
        //cout << arr[i] << ' ';
    }
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else
            for (int i = 1; i <= 60; i++)
            {
                if (arr[i] >= n)
                {
                    cout << i << endl;
                    break;
                }
            }
    }
}