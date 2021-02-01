#include <bits/stdc++.h>
#define ll long long
using namespace std;
//starts form 1 ,not 0
queue<ll> f;
ll vis[1005], a[1005]; //vis:visited or not; a:avalible paths
ll sx, ex;
ll n;

void bfs(int x)
{
    vis[x] = 1;
    f.push(a[x]); //put the next stop into f

    int temp;
    temp = f.front();
    f.pop();
    if (vis[temp] == 1)
    {
        cout << temp << ' ';
        return;
    }

    bfs(temp);
}
int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        fill(vis, vis + 1005, 0); //reset vis={0}
        
        bfs(i);
    }
}