#include <bits/stdc++.h>
#define int long long
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define llinf 9223372036854775807
#define pi acos(-1)
const int N = 5e4 + 5;
using namespace std;
double ans;
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
void Dnc(int l, int r)
{

    if (l >= r)
        return;
    if (l == r - 1)
    {
        ans = min(ans, distance(p[l], p[r]));
        return;
    }
    int m = ((l + r) >> 1);
    Dnc(l, m);
    Dnc(m + 1, r);
    //cout << "L M R " << l << ' ' << m << ' ' << r << endl;
    //cout << "yes\n";
    int cnt = 0;
    for (int i = m; i >= l && p[m].x - p[i].x < ans; i--)
        t[cnt++] = p[i];
    for (int i = m + 1; i <= r && p[i].x - p[m].x < ans; i++)
        t[cnt++] = p[i];
    sort(t, t + cnt, cmpy);
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i + j >= cnt)
                continue;
            ans = min(ans, distance(t[i], t[i + j]));
        }
    }
    return;
};
int n;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (cin >> n)
    {
        ans = 1e20;
        for (int i = 0; i < n; i++)
            cin >> p[i].x >> p[i].y;
        sort(p, p + n, cmpx);
        Dnc(0, n - 1);
        cout << fixed << setprecision(6) << ans << endl;
    }
}