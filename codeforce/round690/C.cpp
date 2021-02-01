#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        ll vis[9] = {0};
        ll sum = 0;
        for (int i = 0; i < 9; i++)
        {
            if (sum + k[i] <= n)
            {
                vis[i] = 1;
                sum += k[i];
            }
        }
        if(sum!=n){
            cout << "-1\n";
        }else{
            for (int i = 9; i >=0;i--){
                if(vis[i]==1){
                    cout << k[i];
                }
            }
            cout << '\n';
        }
    }
}