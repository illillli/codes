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
int input[maxN];
int arr[maxN];
int chang[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    for (int i = 0; i < k; i++)
        cin >> chang[i];
    int temp = 0;
    int Min = 0, Max = 0;
    for (int i = 0; i <= n; i++) // "=" for the last one to be fixed
    {
        if (input[i] == 1)
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
    mp.erase(0);
    if (!mp.empty())
    {
        Min += mp.begin()->first;
        Max += (--mp.end())->first;
    }
    /*    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';*/
    for (int i = 0; i < k; i++)
    {
        int t = chang[i] - 1;
        if (t == 0)
        {
            if (arr[1] == 0)
            {
                arr[0] = 1;
                mp[1]++;
            }
            else
            {
                arr[t] = arr[t + 1] + 1;
                mp[arr[t + 1]]--;
                if (mp[arr[t + 1]] == 0)
                    mp.erase(arr[t + 1]);
                arr[t + 1] = 0;
                arr[arr[t] - 1]++;
                mp[arr[t]]++;
            }
        }
        else if (t == n - 1)
        {
            if (arr[t - 1] == 0)
            {
                arr[n - 1] = 1;
                mp[1]++;
            }
            else
            {
                arr[t] = arr[t - 1] + 1;
                mp[arr[t - 1]]--;
                if (mp[arr[t - 1]] == 0)
                    mp.erase(arr[t - 1]);
                arr[t - 1] = 0;
                arr[t + 1 - arr[t]]++;
                mp[arr[t]]++;
            }
        }
        else
        {
            if (arr[t - 1] == 0 && arr[t + 1] == 0)
            {
                mp[1]++;
                arr[t] = 1;
            }
            else if (arr[t - 1] == 0)
            {
                arr[t] = arr[t + 1] + 1;
                mp[arr[t + 1]]--;
                if (mp[arr[t + 1]] == 0)
                    mp.erase(arr[t + 1]);
                arr[t + 1] = 0;
                arr[arr[t] - 1]++;
                mp[arr[t]]++;
            }
            else if (arr[t + 1] == 0)
            {
                arr[t] = arr[t - 1] + 1;
                mp[arr[t - 1]]--;
                if (mp[arr[t - 1]] == 0)
                    mp.erase(arr[t - 1]);
                arr[t - 1] = 0;
                arr[t + 1 - arr[t]]++;
                mp[arr[t]]++;
            }
            else
            {
                int temp = arr[t - 1] + arr[t + 1] + 1;
                // l = t - arr[t-1], r = t + arr[t+1]
                mp[arr[t - 1]]--;
                mp[temp]++;
                if (mp[arr[t - 1]] == 0)
                    mp.erase(arr[t - 1]);
                mp[arr[t + 1]]--;
                if (mp[arr[t + 1]] == 0)
                    mp.erase(arr[t + 1]);
                arr[t - arr[t - 1]] = temp;
                arr[t + arr[t + 1]] = temp;
            }
        }
        Min += mp.begin()->first;
        Max += (--mp.end())->first;
        /*cout << "Day " << i + 1 << " " << mp.begin()->first << ' ' << it->first << endl;
        for (int j = 0; j < n; j++)
            cout << arr[j] << ' ';
        cout << endl;*/
    }
    cout << Max << endl
         << Min << endl;
}