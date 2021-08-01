#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    random_device rd;
    mt19937 generator(rd());
    ll t;
    cin >> t;
    while(t--){
        unsigned ll x = generator();
        cout << x%3 << '\n';
    }
    return 0;
}