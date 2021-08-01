#include <bits/stdc++.h>
#define ll long long
#define PB emplace_back
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
vector<ll> a, v, ans;
void merge(vector<ll> &v1, vector<ll> &v2 ,vector<ll> &an)
{
    ll a = 0,b= 0;
    while(a < v1.size() && b < v2.size()){
        if(v1.at(a) < v2.at(b)){
            an.PB(v1.at(a));
            a++;
        }
        else 

    }
}
void merge_sort(ll l, ll r, vector<ll> &v) //v 儲存答案
{
    ll m = (l + r) / 2;
    if (l == r)
    {
        v.PB(a.at(l));
        return;
    }
    vector<ll> v1, v2;
    merge_sort(l, m, v1);
    merge_sort(m + 1, r, v2);
    ll a = 0, b = 0;
    while (a < v1.size() && b < v2.size())
    {
        if (v1.at(a) < v2.at(b))
            v.PB(v1.at(a)), a++;
        else
            v.PB(v2.at(b)), b++;
    }
    for (auto p : v)
        cout << l << ' ' << r << ' ' << p << '\n';
}
int main()
{
    ll n;
    scanf("%lld", &n);
    ll _n = n;
    while (_n--)
    {
        ll temp;
        scanf("%lld", &temp);
        a.PB(temp);
    }
    merge_sort(0, n, ans);
    for (auto p : ans)
        cout << p << '\n';
}