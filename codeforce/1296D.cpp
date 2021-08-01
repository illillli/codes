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
const int N = 2e5 + 5;
using namespace std;

int n;
int k;
int a, b;
vector<int> v, v2, v3;
int arr[N];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> a >> b >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    int sum = a + b;
    for (int i = 0; i < n; i++)
    {
        int left = arr[i] % sum;
        if (left != 0 && arr[i] % sum < a) // 必拿
        {
            cnt++;
        }
        else
        { // a -> k-- -> a -> k-- -> a end#
            //a = 4,left = 6
            if (left == 0)
                left = sum;
            if (left % a == 0)
            {
                v.PB((left / a) - 1);
               // v2.PB(i);
            }
            else
            {
                v.PB(left / a);
                //v3.PB(i);
            }
        }
    }
    sort(v.begin(), v.end());
    /*for (auto p : v)
        cout << "*" << p << endl;
    for (auto p : v2)
        cout << "#1 " << p << endl;
    for (auto p : v3)
        cout << "#2 " << p << endl;*/
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
            continue;
        k -= v[i];
        if (k < 0)
            break;
        cnt++;
    }
    cout << cnt << endl;
}