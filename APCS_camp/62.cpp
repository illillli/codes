#include <bits/stdc++.h>
#define int long long
#define pb emplace_back
#define endl "\n"
using namespace std;

int t, n, m;
vector<int> v;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        v.pb(temp);
    }
    int num = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        num += (n - i) * v[i];
    }
    cout << num << endl;
}