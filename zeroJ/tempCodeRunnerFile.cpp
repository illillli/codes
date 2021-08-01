#include <bits/stdc++.h>
#define int long long
#define PB emplace_back
#define endl "\n"
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    { //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            v.PB(n - i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << v.at(i);
            if (i != n - 1)
                cout << ' ';
        }
        cout << endl;
        while (prev_permutation(v.begin(), v.end()))
        {
            for (int i = 0; i < n; i++)
            {
                cout << v.at(i);
                if (i != n - 1)
                    cout << ' ';
            }
            cout << endl;
        }
    }
}