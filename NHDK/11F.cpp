#include <bits/stdc++.h>
//#include <bits/extc++.h>
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
using namespace std;
const int maxN = 1005;
int t, n;
int cnt[30];
int arr[maxN];
vector<int> v;
string s;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    //cout << "__" << t << endl;

    getline(cin, s);
    //cout << "*" << s << endl;
    while (t--)
    {

        cin >> n;
        getline(cin, s);
        getline(cin, s);
        for (int i = 0; i < 30; i++)
            cnt[i] = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
                continue;
            else if (s[i] > 'Z')
            {
                cnt[(int)(s[i] - 'a')]++;
            }
            else
            {
                cnt[(int)(s[i] - 'A')]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                cout << ' ';
                continue;
            }
            if (s[i] > 'Z') // small letter
            {
                cout << (char)((s[i] - 'a' + cnt[s[i] - 'a']) % 26 + 'a');
            }
            else
                cout << (char)((s[i] - 'A' + cnt[s[i] - 'A']) % 26 + 'A');
        }
        cout << endl;
    }
}