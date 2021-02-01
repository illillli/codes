#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, m, a;
    cin >> n >> m >> a;
    n = (n + a - 1) / a;
    m = (m + a - 1) / a;
    cout << n * m;
    return 0;
}