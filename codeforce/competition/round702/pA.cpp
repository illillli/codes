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
        ll n;
        cin >> n;
        ll input[n];
        ll coun = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            double tempa = max(input[i], input[i + 1]);
            double tempb = min(input[i], input[i + 1]);
            tempa /= tempb;
            while(tempa > 2){
                tempa /= 2;
                coun++;
            }
        }
        cout << coun << '\n';
    }
}