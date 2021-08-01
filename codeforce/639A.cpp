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
const int N = 150005;
using namespace std;
int arr[N];
int n, k, q;
set<int> board;
void find(){
    int worst = *board.begin();
    for(int k : board){
        if(arr[k]<arr[worst])
            worst = k;
    }
    board.erase(worst);
};
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k >> q;
    
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    while (q--)
    {
        int type, a;
        cin >> type >> a;
        if (type == 1)
        {
            board.insert(a);
            if (board.size() > k)
                find();
        }
        else
        {
            if (board.count(a))
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
}