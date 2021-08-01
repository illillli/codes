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
    while (t--)
    {
        vector<int> u, s;
        vector<pii> pv;
        vector<priority_queue<int>,vector<int>,less<int>> pq;
        int n;
        cin >> n;
        int Mcount = 0;
        int count[200005] = {0};
        vector<vector<int>> v[n + 5];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            u.PB(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.PB(temp);
        }
        for (int i = 0; i < n; i++)
        {
            pv.PB(make_pair(u[i], s[i]));
        }
        sort(pv.begin(), pv.end());
        for (int i = 0; i < n; i++)
        {
            v[pv[i].first].PB(count[pv[i].first] + pv[i].second);
            count[pv[i].first]++;
            if(count[pv[i].first] > Mcount) Mcount = count[pv[i].first];
        }
        for(auto p:v){
            for(int i = 0; i < p.size();i++){
                v.
            }
        }
        for (int k = 0; k < n; k++)
        {
        }
    }
}