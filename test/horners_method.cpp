#include <bits/stdc++.h>
#define int long long
#define double long double
#define pdd pair<double, double>
#define F first
#define S second
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
const double small = 1e-14;
int n;
double coef[(int)(1e5 + 5)];
void InputCoef()
{
    for (int i = n; i >= 0; i--)
    {
        cout << "INPUT : Coefficient ( " << i << " ) = ";
        cin >> coef[i];
    }
};
void OutputCoef()
{
    cout << "The input polynomial is : f(x) = ";
    for (int i = n; i >= 0; i--)
    {
        if (i != n)
            cout << " + ";
        if (i != 0 && i != 1)
        {
            cout << coef[i] << "x^" << i;
        }
        else if (i == 1)
        {
            cout << coef[i] << "x";
        }
        else if (i == 0)
            cout << coef[i];
    }
    cout << endl;
}
pdd value(double x) //return s,ds
{
    double s = coef[n];
    double ds = 0.0;
    for (int i = n; i > 0; i--)
    {
        ds = ds * x + s;
        s = s * x + coef[i - 1];
    }
    pdd temp = (make_pair(s, ds));
    return temp;
};
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << "||" << endl
         << "|| program : using horner's method & newton's method to find a solution to the polynomial" << endl
         << "||" << endl;
    
    cout << "INPUT : The order of polynomial : ";
    cin >> n;
    InputCoef();
    OutputCoef();
    cout << "INPUT : First try : ";
    double D;
    cin >> D;
    pdd P = value(D);
    double dt = P.F / P.S;
    while (fabs(dt) > small)
    {
        D -= dt;
        P = value(D);
        dt = P.F / P.S;
    }
    cout << fixed << setprecision(15);
    cout << "OUTPUT : D = " << D << endl;
    cout << "OUTPUT : value = " << P.F << endl;
    cout << "OUTPUT : delta = " << dt << endl;
}