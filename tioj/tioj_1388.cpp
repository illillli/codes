#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

ll n, a[105] = {0}, dp[105][105] = {0};
void run()
{
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = a[i];
    }
}
int main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        run();
        //DP
        for (int i = 1; i <= n - 1; i++) //i = 右界-左界
        {
            //cout << "i = " << i << endl;
            for (int j = 0; j < n - i; j++) //j = 左界 , j+i = 右界
            {
                for (int k = j; k <= j + i; k++)
                {
                    if (!(i % 2)) //奇數
                    {
                        dp[j][j + i] = max(dp[j][j + i], dp[j][k] * dp[k + 1][j + i]);
                        //cout << "odd" << endl;
                    }
                    else //偶數
                    {
                        dp[j][j + i] = max(dp[j][j + i], dp[j][k] + dp[k + 1][j + i]);
                        //cout << "even" << endl;
                    }
                }
            }
        }
        //DP end
        /*for(int i = 0;i < n;i++){
            for(int j = i;j < n;j++){
                cout << i << ' ' << j << ' ' << dp[i][j] << endl;
            }
        }*/
        cout << dp[0][n - 1] << endl;
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                dp[i][j] = 0;
    }
}