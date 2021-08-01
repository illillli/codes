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
        string input;
        cin >> n >> input;
        if (input == "2020")
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            if (input[0] == '2')
            {
                if (input[1] == '0')
                {
                    if (input[2] == '2')
                    {
                        if (input[3] == '0')
                        {
                            cout << "YES\n";
                            continue;
                        }
                        if (input[n - 1] == '0')
                        {
                            cout << "YES\n";
                            continue;
                        }
                    }
                    if (input[n - 2] == '2')
                    {
                        if (input[n - 1] == '0')
                        {
                            cout << "YES\n";
                            continue;
                        }
                    }
                }
                if (input[n - 3] == '0')
                {
                    if (input[n - 2] == '2')
                    {
                        if (input[n - 1] == '0')
                        {
                            cout << "YES\n";
                            continue;
                        }
                    }
                }
            }
            if (input[n - 4] == '2')
            {
                if (input[n - 3] == '0')
                {
                    if (input[n - 2] == '2')
                    {
                        if (input[n - 1] == '0')
                        {
                            cout << "YES\n";
                            continue;
                        }
                    }
                }
            }
        }
        cout << "NO\n";
    }
}
