#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if(n==1){
        if (m<8){
            cout << "FAIL! You see see you!\n";
        }else {
            cout << "PASS!\n";
        }
    }
    if(n==2){
        if (m<9){
            cout << "FAIL! You see see you!\n";
        }else {
            cout << "PASS!\n";
        }
    }
    if(n==3){
        if (m<10){
            cout << "FAIL! You see see you!\n";
        }else {
            cout << "PASS!\n";
        }
    }
    

    return 0;
}
