#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m,f;
ll sx, sy;
ll ex, ey;
ll a[1010][1010];
ll dx[4]={1,-1,0,0};
ll dy[4]={0,0,1,-1};
bool vis[1010][1010];

void dfs(int x,int y){
    vis[x][y] = 1;
    for (int i = 0; i < 4;i++){
        if (!(vis[x + dx[i]][y + dy[i]]==1) && x + dx[i]> 0 && x + dx[i]<= n && y+ dy[i] > 0 && y+ dy[i] <= m && a[x][y] != 1)
        {
            dfs(x + dx[i], y + dy[i]);
        }
    }
    
}
int main(){
    cin >> n >> m;
    cin >> sx >> sy;
    cin >> ex >> ey;
    cin >> f;
    for (int i = 0; i < f;i++){
        ll x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    dfs(sx, sy);
    if(vis[ex][ey]==1){
        cout << "Cool!\n";
    }else
        cout << "Harakiri!\n";
}