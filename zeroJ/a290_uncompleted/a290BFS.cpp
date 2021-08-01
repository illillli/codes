#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
int A, B;
stack<int> togo;
bool vis[801];
bool way[801][801] = {0};
void dfs()
{
    int cur = togo.top();
    vis[cur] = 1;
    togo.pop();
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0 && way[cur][i])
        {
            togo.push(i);
        }
    }
    if (vis[B] == 1)
        return;
    if (togo.empty())
        return;
    dfs();
}

int main()
{
    while (scanf("%d%d", &n, &m))
    {
        for (auto p : vis)
            p = 0;
        for (auto p : way)
            p = 0;
        togo = {};
        while (m--)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            way[a][b] = 1;
        }
        cin >> A >> B;
        vis[A] = 1;
        togo.push(A);
        dfs();
        if (vis[B])
            printf("YES!!!\n");
        else
            printf("NO!!!\n");
    }
}
