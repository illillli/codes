#include <bits/stdc++.h>
#define ll long long
#define io                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,fma,tune=native")
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}

multiset<pair<ll, ll>> input;
ll tempa, tempb;
vector<ll> a, b;
int main()
{
    io;
    ll n, time = 0;
    cin >> n;
    ll _a = n, _b = n, _c = n;
    while (_a--)
    {
        cin >> tempa;
        a.emplace_back(tempa);
    }
    while (_b--)
    {
        cin >> tempb;
        b.emplace_back(tempb);
    }
    while (_c--)
    {
        tempa = a.back();
        tempb = b.back();
        input.insert(make_pair(tempa, tempb));
        a.pop_back();
        b.pop_back();
    }
    while (!input.empty())
    {
        ll cura = (*(input.begin())).first;
        ll curb = (*(input.begin())).second;
        input.erase(input.begin());
        if (input.empty())
            break;
        if (cura == (*(input.begin())).first)
        {
            input.insert(make_pair(cura + 1, curb));
            time += curb;
        }
        else
            continue;
    }
    cout << time << '\n';
    return 0;
}