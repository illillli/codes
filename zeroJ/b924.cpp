#include <bits/stdc++.h>
using namespace std;

int deg[10001];
int main()
{
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    while (m--)
    {
        scanf("%d%d", &a, &b);
        deg[a]++;
        deg[b]++;
    }
    int odds = 0;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] % 2)
            odds++;
    }
    if(odds<=2) printf("YES\n");
    else printf("NO\n");
}