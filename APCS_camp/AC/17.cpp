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
const int maxN = 1e5 + 5;
using namespace std;

int t, n;
int a, b;
vector<int> v;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        string s;
        int k = 0;
        bool legal = true;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                k++;
            else
                k--;
            if (k < 0)
                legal = false;
        }
        if(k != 0 || !legal)
            cout << "N" << endl;
        else
            cout << "Y" << endl;
    }
}