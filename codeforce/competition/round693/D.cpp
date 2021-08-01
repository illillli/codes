#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool com(ll a, ll b)
{
    return a > b;
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
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        sort(input, input + n, com);
        ll a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) // start
            {
                if (input[i] % 2 == 0)
                {
                    a += input[i];
                }
            }
            else
            {
                if (input[i] % 2 == 1)
                {
                    b += input[i];
                }
            }
        }
        if (a > b)
        {
            cout << "Alice\n";
        }
        else if (a == b)
        {
            cout << "Tie\n";
        }
        else
            cout << "Bob\n";
    }
}