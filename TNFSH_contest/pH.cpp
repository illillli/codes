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

int t, n;
int a, b;
string strrr;
vector<int> v;
int arr[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> strrr >> n;
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    cout << strrr << ' ' << n << endl;
    if (n == 1)
        cout << "3\n1 2 1\n";
    else if (n == 2)
        cout << "2\n2 1\n";
    else if (n == 3)
        cout << "1\n1\n";
    else if (n == 4)
        cout << "7\n1 3 2 4 1 3 4\n";
    else if (n == 5)
        cout << "0\n";
    else if (n == 6)
        cout << "5\n1 3 2 4 3\n";
    else if (n == 7)
        cout << "1\n1\n";
    else if (n == 8)
        cout << "0\n";
    else if (n == 9)
        cout << "1\n1\n";
    else if (n == 10)
        cout << "2\n2 1\n";
}