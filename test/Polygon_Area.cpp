#include <bits/stdc++.h>
#define int long long
#define double long double
#define pdd pair<double, double>
#define PB emplace_back
#define X first
#define Y second
#define mp make_pair
#define endl "\n"
#define pi acos(-1)
const int N = 1e5 + 5;
using namespace std;
// 使用行列式
int n;
pdd arr[N];
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << "||" << endl
         << "|| program : calculate the area of a certain polygon" << endl
         << "||" << endl
         << "|| n the amount of the dots not exceed 1e5" << endl
         << "||" << endl;
    cout << "INPUT : the amount of the dots = ";
    cin >> n;
    cout << "INPUT EXAMPLE : if there is a dot at (2,3), then keyin 2 3" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "INPUT : the coordinate of dot " << i << " : ";
        double a, b;
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    arr[n + 1] = arr[1];
    double ans = 0;
    for (int i = 1; i < n; i++)
        ans += (arr[i].X * arr[i + 1].Y);
    for (int i = 1; i < n; i++)
        ans -= (arr[i].Y * arr[i + 1].X);
    ans = fabs(ans / 2);
    cout << "OUTPUT : The area is " << ans << endl;
}