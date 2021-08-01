#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

const int N = 1000000;
vector<int> prime;
bool npri[1000005] = {0};
int phi[1000005];
ll int phisum[1000005];
void linear_sleeve()
{
    for (int i = 2; i <= N; i++)
    {
        if (!npri[i])
        {
            prime.emplace_back(i);
            phi[i] = i - 1;
        }
        for (auto p : prime)
        {
            if (p * i > N)
                break;
            npri[p * i] = true;
            if (i % p == 0)
            {
                phi[i * p] = phi[i] * p;
            }
            else
                phi[i * p] = phi[i] * phi[p];
        }
    }
}

int main()
{
    linear_sleeve();
    ll t;
    phisum[2] = phi[2];
    for (int i = 3; i <= N; i++)
    {
        phisum[i] = phisum[i - 1] + phi[i];
    }
    while (cin >> t)
    {
        if(t == 1) cout << "3\n";
        else if(t == 0) cout << "0\n";
        else cout << 2 * phisum[t] + 3 << '\n';
    }
}