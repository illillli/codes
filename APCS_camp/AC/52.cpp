#include "lib0052.h"
#include <bits/stdc++.h>
#define int long long

#define mp make_pair
#define endl "\n"

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Init();
    int l = 1, r = 1000001;
    while (l != r - 1)
    {
        int mid = l + (r - l) / 2;
        int t = Query(mid);
        if (t)
            l = mid;
        else
            r = mid;
    }
    Answer(l);
}