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
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            if (arr[i] > arr[i - 1])
                break;
        }
        int j = i;
        for (; j >= 0; j--)
        {
            if (arr[j] < arr[j - 1])
                break;
            //cout << "J = " << j << endl;
        }
        if(j == -1)
            j = 0;
        cout << j << endl;
        
    }
}