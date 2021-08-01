#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a,b;
    cin >> a >>b;
    for (int i = 0; i < 2 * b + 1;i++)
        cout << "*";
    cout << endl;
    for (int i = 0; i < a;i++){
        cout << "*";
        for (int j = 0; j < b;j++){
            cout << "0*";
        }
        cout << endl;
    }
    for (int i = 0; i < 2 * b + 1;i++)
        cout << "*";
    cout << endl;
}