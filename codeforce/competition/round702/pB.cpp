#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll zero = 0, one = 0, two = 0,coun= 0;
        ll temp;
        ll n;
        cin >> n;
        ll _n = n;
        n /= 3;
        while (_n--)
        {
            cin >> temp;
            if (temp % 3 == 0)
                zero++;
            else if (temp % 3 == 1)
                one++;
            else
                two++;
        }
        while (zero != n || one != n || two != n)
        {
            if (zero > n)
            {
                coun += zero - n;
                one += zero - n;
                zero = n;
            }
            if (one > n)
            {
                coun += one - n;
                two += one - n;
                one = n;
            }
            if (two > n)
            {
                coun += two - n;
                zero += two - n;
                two = n;
            }
        }
        cout << coun << '\n';
    }
}