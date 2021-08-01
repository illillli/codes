#include <iostream>
using namespace std;
int n,trees;

void A(int n){
    for (int i = 1; i <= n;i++){
        cout << string(n - i, ' ');
        cout << string(2*i - 1, '*');
        cout << endl;
    }
}
void B(int n){
    A(n);
    A(n);
}
void C(int n){ 
    for (int j = 1; j <= n;j++)
        for (int i = 1; i <= j; i++)
        {
            cout << string(n - i, ' ');
            cout << string(2 * i - 1, '*');
            cout << endl;
        }
}
void D(int n){
    n = 10 * n;
    A(n);
}
void E(int n){
    for (int i = 1; i <= n;i++){
        cout << string(n - i+2, ' ');
        cout << string(2*i - 1, '*');
        cout << endl;
    }
    cout << string(2 * n + 3, '#');
    cout << endl;
}
void F(int n){
    n = 2 * n;
    A(n);
}
void G(int n){
    n = 3 * n;
    A(n);
}
void H(int n){
    n = 7 * n;
    A(n);
}
void I(int n){
    n = 4 * n - 1;
    A(n);
}
int main(){
    cin >> trees;
    for (int k = 1; k <= trees;k++){
        char kinds;
        cin >> kinds;
        if(kinds=='A'){
            cin >> n;
            A(n);
        }
        if(kinds=='B'){
            cin >> n;
            B(n);
        }
        if(kinds=='C'){
            cin >> n;
            C(n);
        }
        if(kinds=='D'){
            cin >> n;
            D(n);
        }
        if(kinds=='E'){
            cin >> n;
            E(n);
        }
        if(kinds=='F'){
            cin >> n;
            F(n);
        }
        if(kinds=='G'){
            cin >> n;
            G(n);
        }
        if(kinds=='H'){
            cin >> n;
            H(n);
        }
        if(kinds=='I'){
            cin >> n;
            I(n);
        }
        cout << endl;
    }
    return 0;
}