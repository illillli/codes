#include <bits/stdc++.h>
using namespace std;

int t, x, temp, k = 1;

int main()
{
    cin >> t;
    while (t--)
    {
        temp = 0;
        k = 0;
        cin >> x;
        if (x == 0)
        {
            cout << "0\n";
            continue;
        }
        while (temp < x)
        {
            k++;
            temp = (k) * (k + 1) / 2;
        }
        temp -= x;
        if (temp == 1)
        {
            cout << k + 1 << '\n';
            continue;
        }
        else
        {
            cout << k << '\n';
            continue;
        }
    }
}