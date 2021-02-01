#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string a, b, sum;
    cin >> a >> b;
    ll n,k;
    cin >> n >> k;
    sum = a + b;
    if(n%2==1){
        if((sum.length())*(n/2)+a.length()<k){
            cout << "X\n";
            return 0;
        }
    }else if(n%2==0){
        if((sum.length())*(n/2)<k){
            cout << "X\n";
            return 0;
        }
    }else {
        k=k % sum.length();
        cout << sum[k] << '\n';
        return 0;
    }


}