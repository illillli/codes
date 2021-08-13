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
using namespace std;

int t, n;
int a, b;
vector<pll> arr;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    arr.resize(n + 1);
    arr[0] = mp(-intinf, 0);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = mp(temp, i);
    }
    sort(arr.begin(), arr.end());
    while(q--){
        int quest;
        cin >> quest;
        auto lb = lower_bound(arr.begin(), arr.end(), mp(quest, 1ll));
        auto ub = upper_bound(arr.begin(), arr.end(), mp(quest, n));
        int cnt = ub - lb;
        if(cnt)
            cout << lb->S << ' ' << cnt << endl;
        else
            cout << "-1 0" << endl;
    }
}