#include <bits/stdc++.h>
#include <chrono>
#define ll long long
using namespace std;

int main(){
    auto rd = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 generator(rd);
    ll t ;
    cin >> t;
    while(t--){
        unsigned ll x = generator();
        cout << x << '\n';
    }
    return 0;
}