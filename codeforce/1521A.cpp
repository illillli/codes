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
    cin >> t;
    while(t--){
        int A, B;
        cin >> A >> B;
        bool yes = true;
        if(B == 1)
            yes = false;
        if(A == B)
            yes = false;
        if(yes){cout << "YES" << endl;
        cout << A * B << ' ' << A << ' ' << A * (B + 1) << endl;}
        else
            cout << "NO" << endl;
    }
}