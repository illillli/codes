#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define pb emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 2e5 + 5;
using namespace std;

int t, n, m;
int a, b;
int bit[maxN];
string str;
int arr[maxN];
int query(int k){
    int sum = 0;
    for (int i = k; i > 0;i -= i & (-i))
        sum += bit[i];
    return sum;
}
void modify(int k, int val){
    for (int i = 0; i < k;i+= i & (-i)){
        bit[i] += val;
    }
    return;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < 2 * n;i++){
        cin >> arr[i];
    }
}