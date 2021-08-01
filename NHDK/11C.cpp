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
const int maxN = 1e6 + 5;
using namespace std;

int t, n;
int q;
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> q;
    for (int i = 1; i <= 100; i++)
        for (int j = 1; j <= 100; j++)
            for (int k = 1; k <= 100; k++)
            {
                arr[i + j + k]++;
                arr[i * j + k]++;
                arr[j * k + i]++;
                arr[j * k * i]++;
            }
    while (q--)
    {
        cin >> n;
        cout << arr[n] << endl;
    }
}