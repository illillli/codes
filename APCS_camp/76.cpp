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

int t, n, m;
int a, b;
int ans[maxN];
string str;
bool cmp(string &a,string &b){
    return a + b < b + a;
}
string arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n;i++)
        cout << arr[i];
    cout << endl;
}