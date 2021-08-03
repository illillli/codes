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

int k, n;
int a, b;
map<int, int> mp;
int arr[maxN];
int change[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
        cin >> change[i];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            temp++;
        else
        {
            if (i - 1 >= 0)
                arr[i - 1] = temp;
            arr[i - temp] = temp;
            mp[temp]++;
            temp = 0;
        }
    }
    for (int i = 0; i < k; i++)
    {
        int t = change[i];
        if (t == 0)
        {
            if (arr[1] == 0)
                mp[1]++;
            else
            {
                arr[0] = arr[1] + 1;
                mp[arr[1]] -= 1;
                if(mp[arr[1]]==0)
                    mp.erase(arr[1]);
                arr[1] = 0;
                arr[arr[0]] += 1;
                mp[arr[0]]++;
            }
        }
        else if (t == n - 1)
        {
            if (arr[n - 2] == 0)
                mp[1]++;
            
        }
    }
}