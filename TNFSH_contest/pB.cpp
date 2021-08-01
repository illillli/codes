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
const int N = 1e6 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int sum = arr[0];
    int cnt = 1;
    for (int i = 1; i < n;i++){
        if(arr[i]>sum) {
            sum += arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}