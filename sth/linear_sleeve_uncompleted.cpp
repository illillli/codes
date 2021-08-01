#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;
const ll N = (int)(1e7);
bool nprime[N + 5] = {0};
ll phi[N + 5];
vector<int> prime;

void linear_sleeve()
{
    for (int i = 2; i <= N; i++)
    {
        if (!nprime[i])
        {
            prime.emplace_back(i);
            phi[i] = i - 1;
        }
        for (auto p : prime)
        {
            if (p * i > N)
                break;
            if (i % p == 0)
            {
                phi[i * p] = phi[i] * p;
            }
            else
                phi[i * p] = phi[p] * phi[i];
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
    }
}