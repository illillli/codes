#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b>> c;
    for(int i=1;i<=b;i++){
        int m,n;
        cin >> m >> n;
        a+=m*n;    
        
    }
    cout << (a-c)/4 <<endl;

    return 0;
}