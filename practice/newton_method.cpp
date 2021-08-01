// made by illilli, 05/29/2021
#include <bits/stdc++.h>
#define int long long
#define double long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define F first
#define S second
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const double g = 10.0;
using namespace std;
// m a =  - m g - b v.
// b/m = 1 , V0 is given
// y(t) = (v0 + g) (1 - exp(-t)) - g t.
// y'(t) = (v0 + g) e^{-t} - g.
// Find y(t) = 0
// using t(n+1) = t(n) - dt ; with dt = y(t) / v(t)
// fisrt try t0 = (v0 / g + 1)
// |dt| < 10e-14
double v0,t;
double y(double time){
    double y = (v0 + g) * (1.0 - exp(-1.0 * time)) - g * time;
    return y;
};
double velocity(double time){
    double v = (v0 + g) * exp(-1.0 * time) - g;
    return v;
};
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << "Please enter the initial upward speed : ";
    cin >> v0;
    t = (v0 / g + 1.0);
    double dt;
    int count = 0;
    dt = y(t) / velocity(t);
    while(abs(dt) > 1e-14){
        count++;
        t -= dt;
        dt = y(t) / velocity(t);
    }
    cout << fixed << setprecision(15) << "dt = " << dt << ", t = " << t << ", y = " << y(t) << endl;
    cout << "count = " << count;
    return 123;
}