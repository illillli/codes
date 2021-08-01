#include <bits/stdc++.h>
using namespace std;
string s;
int n, t[2009], a[2009];
vector<int> v;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    getline(cin, s);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < n; j++)
            if (t[j] > t[j + 1])
            {
                v.push_back(j);
                swap(t[j], t[j + 1]);
            }
    for (auto p : t)
        cout << p << ' ';
    cout << endl;
    cout << s << "\n"
         << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
}