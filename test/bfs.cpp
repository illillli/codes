#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, f;
ll sx, sy;
ll ex, ey;
ll a[1010][1010];
ll dx[4] = {1, -1, 0, 0};
ll dy[4] = {0, 0, 1, -1};
bool vis[1010][1010];
bool cango(int x, int y){
    return (!(vis[x][y] == 1) && x > 0 && x <= n && y > 0 && y <= m && a[x][y] != 1);
}
queue<int> qx,qy;
void bfs(int x, int y)
{
    qx.push(x);
    qy.push(y);
    vis[x][y] = 1;
    while (!qx.empty())
    {
        ll cur_x = qx.front(), cur_y = qy.front();
        qx.pop();
        qy.pop();
        for (int i = 0; i < 4; i++)
        {
            if (cango(cur_x + dx[i], cur_y + dy[i]))
            {
                qx.push(cur_x + dx[i]);
                qy.push(cur_y + dy[i]);
                vis[cur_x + dx[i]][cur_y + dy[i]] = 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    cin >> sx >> sy;
    cin >> ex >> ey;
    cin >> f;
    for (int i = 0; i < f; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    bfs(sx, sy);
    if (vis[ex][ey] == 1)
    {
        cout << "Cool!\n";
    }
    else
        cout << "Harakiri!\n";
}