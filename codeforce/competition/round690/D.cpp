#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> input;
        ll n;
        while (t--)
        {
            ll temp;
            cin >> temp;
            input.push_back(temp);
        }
        bool same = false;
        ll times = 0;
        while (same == false)
        {
            ll sma = input.at(0);
            ll p, samenum = 0;
            for (int i = 0; i < input.size(); i++)
            {
                if (input[i] < sma)
                {
                    sma = input[i];
                    same = false;
                    p = i;
                    samenum++;
                }
            }
            if (samenum == input.size())
            {
                same = true;
                break;
            }
            ll temp = input.erase(p);
            input.at(p - 1) += input.at(p);
            input.at(p + 1) += input.at(p);

            times++;
        }
        cout << times << '\n';
    }
}