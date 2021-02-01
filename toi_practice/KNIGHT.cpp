#include <bits/stdc++.h>
using namespace std;
int vis[1005][1005];
int dis[1005][1005];
int lengx, lengy;
int sx, sy, ex, ey;
int dx[8] = {2, 1, 2, 1, -2, -1, -2, -1};
int dy[8] = {1, 2, -1, -2, 1, 2, -1, -2};
queue<int> findx,findy;
int tempx, tempy;
//all start from 1
bool cango(int xp,int yp){
    return xp <= lengx && xp > 0 && yp > 0 && yp <= lengy && vis[xp][yp] != 1;
}
void bfs(int x,int y){
    findx.push(x);
    findy.push(y);
    vis[x][y] = 1;
    dis[x][y] = 0;
    while(!findx.empty()){
        tempx = findx.front();
        tempy = findy.front();
        findx.pop();
        findy.pop();
        for (int i = 0; i < 8;i++){
            if(cango(tempx+dx[i],tempy+dy[i])){
                findx.push(tempx + dx[i]);
                findy.push(tempy + dy[i]);
                vis[tempx + dx[i]][tempy + dy[i]] = 1;
                dis[tempx + dx[i]][tempy + dy[i]] = dis[tempx][tempy] + 1;
            }
        }
    }
}
int main(){
    cin >> lengx >> lengy;
    cin >> sx >> sy >> ex >> ey;
    bfs(sx, sy);
    if(vis[ex][ey]==1){
        cout << dis[ex][ey] << '\n';
    }else
        cout << "-1" << '\n';
}