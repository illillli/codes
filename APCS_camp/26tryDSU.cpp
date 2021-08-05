#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define PB emplace_back
#define F first
#define S second
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 1e5 + 5;
using namespace std;

int t, n, m;
multiset<int> s;
int arr[maxN];
int query[maxN];
int cnt[maxN];
int father[maxN];
int findfather(int x)
{
    if (father[x] == x)
        return x;
    return father[x] = findfather(father[x]);
}
void combine(int a, int b) //put a into b
{
    s.erase(s.find(cnt[findfather(a)]));
    s.erase(s.find(cnt[findfather(b)]));
    cnt[findfather(b)] += cnt[findfather(a)];
    s.insert(cnt[findfather(b)]);
    father[findfather(a)] = findfather(b);
    return;
}

int Min, Max;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        father[i] = i;
    }
    for (int i = 0; i < m; i++)
        cin >> query[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            if (i - 1 >= 0 && arr[i - 1] == 1)
                father[i] = father[i - 1];
            cnt[findfather(i)]++;
            if (i + 1 == n || (i + 1 < n && arr[i + 1] == 0))
                s.insert(cnt[findfather(i)]);
        }
    }
    if (s.size())
    {
        Min += *s.begin();
        Max += *(--s.end());
    }
    //cout << "Day 0 Min " << Min << " Max " << Max << endl;
    for (int i = 0; i < m; i++)
    {
        int t = query[i] - 1;
        arr[t] = 1;
        cnt[t]++;
        s.insert(cnt[t]);
        //cout << "S size" << s.size() << endl;
        if (t - 1 >= 0 && arr[t - 1] == 1)
        {
            combine(t, t - 1);
        }
        if (t + 1 < n && arr[t + 1] == 1)
        {
            combine(t + 1, t);
        }
        if (s.size())
        {
            Min += *s.begin();
            Max += *(--s.end());
        }
        //cout << "Day " << i + 1 << " Min " << Min << " Max " << Max << endl;
    }
    cout << Max << endl
         << Min << endl;
}