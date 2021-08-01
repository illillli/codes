#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define endl "\n"

using namespace std;

//sol : 遇到第二個i前計數-第一個之前的
//用bit紀錄出現次數 遇到i 用query(i)得到所有小於i的出現次數
const int N = 2e6 + 5;
int n, ans;
int bit[N];
bool cnt[N];

void modify(int x)
{
    for (int i = x; i <= n; i += (i & -i))
        bit[i]++;
};

int query(int x)
{
    int sum = 0;
    for (int i = x; i > 0; i -= (i & -i))
        sum += bit[i];
    //cout << "query(" << x << ")" << endl;
    return sum;
};

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        if (cnt[x] == 0)
        {
            cnt[x] = 1;
            ans -= query(x - 1);
        }
        else
        {
            ans += query(x - 1);
        }
        modify(x);
    }
    cout << ans << endl;
}