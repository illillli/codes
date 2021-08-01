#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"

using namespace std;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    vector<pii> va; // a ^ b
    cin >> n;
    int _n = n;
    int s = (int)(sqrt(n)) + 1;
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        if (n % i != 0)
            continue;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        va.PB(make_pair(i, count));
    }
    int temp = 0;
    for(auto p : va){
        if(temp) cout << " * ";
        if(p.second == 1) cout << p.first;
        else cout << p.first << "^" << p.second;
        temp++;
    }
    cout << endl;
}