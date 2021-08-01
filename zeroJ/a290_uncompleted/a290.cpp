#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define io                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
struct road
{
    int a;
    int b;
    bool operator<(road const &roadx)
    {
        if (a < roadx.a)
            return 1;
        else if (a == roadx.a && b < roadx.b)
            return 1;
        else
            return 0;
    }
} r;
int main()
{
    ll n, m;
    while (cin >> n >> m)
    {
        int a, b;
    }
}