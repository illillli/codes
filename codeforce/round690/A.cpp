#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll input[305];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        for (int k = 0; k < n; k++)
        {
            if (k % 2 == 0)
            {
                cout << input[k / 2] << ' ';
            }
            else
                cout << input[n - 1 - k / 2] << ' ';
        }
        cout << '\n';
    }
}