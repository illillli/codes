#include <bits/stdc++.h>
#define int long long
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 5e4 + 5;
using namespace std;
struct point
{
    double x, y;
} p[N], t[N];
bool cmpx(point p1, point p2) { return (p1.x < p2.x); }
bool cmpy(point p1, point p2) { return (p1.y < p2.y); }
double distance(point a, point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
double Dnc(int l, int r)
{

    if (l >= r)
        return 1e9;
    int m = ((l + r) >> 1);
    //cout << "L M R " << l << ' ' << m << ' ' << r << endl;
    double d = min(Dnc(l, m), Dnc(m + 1, r));
    //cout << "yes\n";
    int cnt = 0;
    for (int i = m; i >= l && p[m].x - p[i].x < d; i--)
        t[cnt++] = p[i];
    for (int i = m + 1; i <= r && p[i].x - p[m].x < d; i++)
        t[cnt++] = p[i];
    sort(t, t + cnt, cmpy);
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 1; j <= 3 && i + j < cnt; j++)
        {
            d = min(d, distance(t[i], t[i + j]));
        }
    }
    return d;
};
int n;
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> p[i].x >> p[i].y;
        sort(p, p + n, cmpx);
        cout << fixed << setprecision(6) << Dnc(0, n - 1) << endl;
    }
}