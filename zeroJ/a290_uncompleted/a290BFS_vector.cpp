#include <bits/stdc++.h>
using namespace std;
int n, m;
int A, B;
stack<int> togo;
bool vis[801];
vector<int> ways[801];
void dfs()
{
    int cur = togo.top();
    vis[cur] = 1;
    togo.pop();
    for (auto p : ways[cur])
    {
        if (vis[p] == 0)
        {
            togo.push(p);
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
        stack<int>().swap(togo);
        for (auto p : vis)
            p = 0;
        for (auto p : ways)
            p = {0};
        togo = {};
        while (m--)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            ways[a].push_back(b);
        }
        scanf("%d%d", &A, &B);
        togo.push(A);
        dfs();
        if (vis[B])
            printf("YES!!!\n");
        else
            printf("NO!!!\n");
    }
}
