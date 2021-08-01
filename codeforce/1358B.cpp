#include <bits/stdc++.h>
#define int long long
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 2e5 + 5;
using namespace std;

int t, n;
int sum;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % n)
        {
            cout << "-1" << endl;
        }
        else
        {
            sum /= n;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > sum)
                    temp++;
            }
            cout << temp << endl;
        }
    }
}