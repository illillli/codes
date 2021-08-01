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
const int maxN = 1e3 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[maxN];
signed main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << "@" << endl
         << flush;
    int n;
    cin >> n;
    int l = 1, r = n, max;
    cout << "? " << l << ' ' << r << endl
         << flush;
    cin >> max;
    while (l != r)
    {
        int m = (l + r) / 2;
        cout << "? " << l << ' ' << m << endl
             << flush;
        int temp;
        cin >> temp;
        if (temp == max)
            r = m;
        else
            l = m+1;
        if (l == r)
            break;
    }
    cout << "! " << l << endl
         << flush;
}