#include <bits/stdc++.h>
using namespace std;

vector<int> V[801];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    while (~scanf("%d%d", &N, &M))
    {
        for(int i=1;i<=N;++i)
            V[i].clear();

        while (M--)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            V[a].emplace_back(b);
        }

        int S, E;
        scanf("%d%d", &S, &E);

        vector<int> todo;
        vector<int> used(N+1);
        todo.emplace_back(S);
        used[S] = true;

        while (!todo.empty()) {
            int v = todo.back();
            todo.pop_back();

            for(int u:V[v])
                if (!used[u]) {
                    used[u] = true;
                    todo.emplace_back(u);
                }
        }

        if (used[E]) cout << "Yes!!!\n";
        else cout << "No!!!\n";
    }
}
