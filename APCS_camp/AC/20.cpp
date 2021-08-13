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
char ans[maxN];
string input;
int arr[maxN];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> input;
    ans[0] = input[0];
    int j = 0;
    for (int i = 1; i < input.size(); i++)
    {
        if (j >= 0 && input[i] == ans[j])
            j--;
        else
            ans[++j] = input[i];
    }
    for (int i = 0; i <= j;i++){
        cout << ans[i];
    }
    cout << endl;
}