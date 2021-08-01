#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
using namespace std;
int n = 100000;
int bit[n + 5];
int lowbit(int x){
    return x & -1 * x;
}
int query(int p){
    int sum = 0;
    for (int i = p; i > 0;i -= lowbit(i)){
        sum += bit[i];
    }
    return sum;
}
void modify(int p,int add){
    int sum;
    for (int i = p i < n;i+=lowbit(i))
        sum += add;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

}