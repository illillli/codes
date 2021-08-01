#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define llinf 9223372036854775807
#define PB emplace_back
#define endl "\n"

using namespace std;
vector<ll> v;
void merge(vector<ll> &vec, ll l, ll mid, ll r)
{
    vector<ll> left(vec.begin() + l, vec.begin() + mid + 1);
    vector<ll> right(vec.begin() + mid + 1, vec.begin() + r + 1);
    ll idL = 0, idR = 0;
    left.PB(llinf);
    right.PB(llinf);
    for (ll i = l; i <= r; i++)
    {
        if (left.at(idL) <= right.at(idR))
        {
            vec.at(i) = left.at(idL);
            idL++;
        }
        else
        {
            vec.at(i) = right.at(idR);
            idR++;
        }
    }
}
void mergesort(vector<ll> &vec, ll l, ll r)
{
    if (l < r)
    {
        ll mid = (l + r) / 2;
        mergesort(vec, l, mid);
        mergesort(vec, mid + 1, r);
        merge(vec, l, mid, r);
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    while (cin >> n)
    {
        v.clear();
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.PB(temp);
        }
        mergesort(v,0,n-1);
        //cout << "vector : "<<  endl;
        for(int i = 0;i < n;i++) cout << v.at(i) << ' ';
        cout << endl;
        //cout << "output ends\n";
    }
}