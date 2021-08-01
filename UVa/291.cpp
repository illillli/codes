#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
using namespace std;

void output(ll i)
{
    cout << "--" << i << '\n';
}
bool used[6][6];
bool way[6][6];
void dfs
int main()
{
    way[1][5]=way[5][1]=1;
    way[2][5]=way[5][2]=1;
    way[3][5]=way[5][3]=1;
    way[4][5]=way[5][4]=1;
    way[1][2]=way[2][1]=1;
    way[2][3]=way[3][2]=1;
    way[1][3]=way[3][1]=1;
    way[4][3]=way[3][4]=1;
    dfs();

}