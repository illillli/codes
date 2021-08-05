#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int t, n, m;
int a, b;
vector<int> v;
int arr[20];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int Max = -1;
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            Max = max(Max, temp);
        }
        arr[i] = Max;
        sum += Max;
    }
    cout << sum << endl;
    bool yes = false;
    for (int i = 0; i < n; i++)
    {
        if (sum % arr[i] == 0)
        {
            cout << arr[i] << ' ';
            yes = true;
        }
    }
    if (yes)
        cout << endl;
    else
        cout << -1 << endl;
}