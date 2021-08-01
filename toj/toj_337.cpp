#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    for(int i = 1 ;i <= m ;i++){
        for(int j=1 ;j <= n;j++){
            cout << i << '*' << j;
            cout << '=' << i*j <<' ';
        }
        cout << endl;
    }

    return 0;
}