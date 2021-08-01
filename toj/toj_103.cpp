#include<iostream>
using namespace std;

int main() {
    string a,b;
    int n,m;
    cin >> a >> n >> b >> m;
    if (a==b and n==m){
        cout << "GOOD\n";
    }else if (a==b or n==m){
        cout << "=~=\n" ;
    }else {
        cout << "OTZ\n";
    }
    

    return 0;
}