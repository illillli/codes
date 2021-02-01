#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t;
ll n;
ll two, one, sum;
int main()
{
    cin >> t;
    while (t--)
    {
        two = 0;
        one = 0;
        sum = 0;
        cin >> n;
        while (n--)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                one++;
            }
            else
                two++;
            sum += temp;
        }
        if (sum % 2 != 0) //總合為2倍數
        {
            cout << "NO\n";
            continue;
        }
        sum /= 2;         //每人應得
        if (sum % 2 == 1) //每人應得奇數
        {
            if (one <= 0)
            {
                cout << "NO\n";
                continue;
            }
            else
            {
                cout << "YES\n";
                continue;
            }
        }
        else
        {
            cout << "YES\n";
            continue;
        }
    }
}