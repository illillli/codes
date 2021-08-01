#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;


signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >>t;
    while(t--)
    {int a,b,c;
    cin >> a >> b >> c;
    if(a > b) swap(a,b);
    if(b - a > a*c) cout << "No" << endl;
    else cout << "Yes" << endl;}
}