#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define PB emplace_back
#define F first
#define S second
#define mp make_pair
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int N = 1e5 + 5;
using namespace std;

int l, k, n;
int a, b;
vector<int> v;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> l >> k >> n;
    if (l % k)
    {
        l /= k;
        l++;
    }
    else
        l /= k;
    int d = llinf;
    int c = -1;
    for (int i = 1; i <= n;i++){
        int temp;
        cin >> temp;
        if(abs(temp-l) < d){
            d = abs(temp - l);
            c = i;
        }
    }
    cout << c << endl;
}