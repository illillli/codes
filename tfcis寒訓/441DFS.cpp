//http://domen111.github.io/UVa-Easy-Viewer/?441
#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
using namespace std;

void show(ll i)
{
    cout << "i = " << i << '\n';
}


ll k;
int result[6];
int input[12];

void dfs(ll depth, ll now) //現在取第depth個數,從now開始取
{
    if (depth == 7)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << input[result[i]] << ' ';
        }x
        cout << '\n';
        return;
    }
    if (k - now - 1 < 6 - depth)
    {
        return;
    }
    for (int i = now; i < k; i++)
    {
        result[depth] = i;
        dfs(depth + 1, i);
    }
}

int main()
{
    ll t;
    while (cin >> t)
    {
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> input[i];
        }
        dfs(1, 0);
    }
}