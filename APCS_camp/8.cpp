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
const int maxN = 1e6 + 5;
using namespace std;

int n;
int arr[maxN];
int cnt[maxN];
int maxL, maxlen = -1 * intinf;
signed main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0, j = 0; i < n;)
    {
        while (j < n && cnt[arr[j]] == 0)
        {
            cnt[arr[j]]++;
            if ((j - i + 1) > maxlen)
            {
                maxL = i;
                maxlen = j - i + 1;
            }
            //cout << "i = " << i <<" j = " << j << endl;
            j++;
        }
        if (j != n)
        {
            while (arr[i] != arr[j])
            {
                //cout << "loop" << endl;
                cnt[arr[i]]--;
                i++;
            }
            cnt[arr[i]]--;
            i++;
        }
        else
        {
            //cout << "break" << endl;
            break;
        }
    }
    for (int i = maxL; i < maxL + maxlen; i++)
    {
        cout << arr[i];
        if (i != maxL + maxlen - 1)
            cout << ' ';
    }
    cout << endl;
}