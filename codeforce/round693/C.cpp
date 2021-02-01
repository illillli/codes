#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t;
ll n;
ll input[200005], score[200005];
ll best;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i + input[i] >= n)
            {
                score[i] = input[i];
            }
            else
            {
                score[i] = input[i] + score[i + input[i]];
            }
            if (score[i] > best)
            {
                best = score[i];
            }
        }
        cout << best << '\n';
        score[200004] = {0};
        input[200004] = {0};
        best = 0;
    }
}