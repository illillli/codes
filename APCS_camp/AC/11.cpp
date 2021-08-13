#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define mp make_pair
#define endl "\n"
const int maxN = 1e6 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> prime;
bool nprime[maxN + 5];
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //linear sieve
    cin >> t;
    for (int i = 2; i < maxN; i++)
    {
        if (!nprime[i])
        {
            prime.PB(i);
        }
        for (auto p : prime)
        {
            if (i * p > maxN)
                break;
            nprime[i * p] = true;
            if (i % p == 0)
                break;
        }
    }
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x == *lower_bound(prime.begin(), prime.end(), x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}