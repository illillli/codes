#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define endl "\n"
#define llinf 9223372036854775807
using namespace std;
int arr[500005];
int tree[2000005];
int n, m;
// build the tree
void build(int l, int r, int treeIndex)
{
    if (l == r)
    {
        tree[treeIndex] = arr[l];
        return;
    }
    int mid = l + (r - l) / 2;
    build(l, mid, treeIndex * 2);
    build(mid + 1, r, treeIndex * 2 + 1);
    tree[treeIndex] = max(tree[treeIndex * 2], tree[treeIndex * 2 + 1]);
};
//asking [queryL,queryR] inside [l,r] on tree[treeIndex]
int query(int l, int r, int queryL, int queryR, int treeIndex)
{
    int mid = l + (r - l) / 2;
    if(queryR < l ||  queryL > r)
        return -1 * llinf; //[l,r] doesn't include any of [queryL,queryR]
    else if(queryL <= l && queryR >= r){
        return tree[treeIndex];
    }
    else {
        return max(query(l, mid, queryL, queryR, treeIndex * 2),query(mid+1,r,queryL,queryR,treeIndex*2+1));
    }
};
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, n, 1);
    cin >> m;
    for (int i = 0; i < m;i++){
        int a, b;
        cin >> a >> b;
        if(a>b)
            swap(a, b);
        cout << query(1, n, a, b, 1) << endl;
    }
}