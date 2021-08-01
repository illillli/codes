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
double coef[(int)(1e5 + 5)];
using namespace std;
int n;
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
double value(double x) //return s
{
    double s = coef[n];
    for (int i = n; i > 0; i--)
    {
        s = s * x + coef[i - 1];
    }
    return s;
};
signed main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << "||" << endl
         << "|| program : using horner's method to find the value at a certain position of the polynomial" << endl
         << "||" << endl
         << "|| program stops when input x > 1e5" << endl
         << "||" << endl;

    cout << "INPUT : The order of polynomial : ";
    cin >> n;
    InputCoef();
    OutputCoef();
    cout << fixed << setprecision(15);

    double D;
    while (cout << "INPUT : x = ", cin >> D)
    {
        if (D >= 1e5)
        {
            cout << "program stops" << endl;
            break;
        }
        cout << "OUTPUT : f(x) = " << value(D) << endl;
    }
}