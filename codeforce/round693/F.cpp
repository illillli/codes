#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bool can = true;
        ll n;
        cin >> n;
        bool input[2][n];
        for(auto &p:input){
             for(auto &q:p){
                 q = 0;
        }
        } //clear
        ll k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            ll t1, t2;
            cin >> t1 >> t2;
            input[t1- 1][t2 - 1] = 1; //block
        }
        for (int i = 0; i < n; i++)
        {
            if(i==n-1){
                if(input[0][i]==1){
                    if(input[1][i]==0){
                        can = false;
                    }
                }
                if(input[1][i]==1){
                    if(input[0][i]==0){
                        can = false;
                    }
                }
            }
            else if (input[0][i] == 0 && input[1][i] == 0)
            {
                continue;
            }
            else if (input[0][i] == 0)
            {
                if (input[0][i + 1] != 0)
                {
                    can = false;
                    break;
                }
                else
                {
                    input[0][i + 1] = 1;
                }
            }
            else if (input[1][i] == 0)
            {
                if (input[1][i + 1] != 0)
                {
                    can = false;
                    break;
                }
                else
                {
                    input[1][i + 1] = 1;
                }
            }
        }
        if (can)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}