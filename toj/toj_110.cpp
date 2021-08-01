#include<iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n;
    for(int p=1;p<=n;p++ ){
        cin >> k;
        for(int i=1;i<=k-3;i++){
            cout << string(k-i,' ');
            cout << string(2*i-1,'*');
            cout << endl;
            
        }cout << string(2*k-1,'*')<< endl;
        cout << ' ' << string(2*k-3,'*')<<endl;
        cout << string(2*k-1,'*')<< endl;
        for(int j=k-3;j>=1;j--){
            cout << string(k-j,' ');
            cout << string(2*j-1,'*');
            cout << endl;
            
        }
        
        
    }

    return 0;
}
