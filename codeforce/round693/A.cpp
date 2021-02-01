#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t;
ll w, h, n;
ll sumw = 0, sumh = 0;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> w >> h >> n;
        while (w % 2 == 0)
        {
            sumw++;
            w /= 2;
        }
        while (h % 2 == 0)
        {
            sumh++;
            h /= 2;
        }
        if ((1 << sumw) * (1 << sumh) >= n)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        sumw = 0;
        sumh = 0;
    }
}