#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double a,b;
    char k;
    cin >> a >> k >> b;
    cout << fixed  <<  setprecision(4);
    if(k == '+'){
        cout << a << ' ' << k;
        cout << ' ' << b << " = ";
        cout << fixed  <<  setprecision(4) << a+b << endl;
    }else if(k == '-'){
        cout << a << ' ' << k;
        cout << ' ' << b << " = ";
        cout << fixed  <<  setprecision(4)  << a-b << endl;
    }else if(k == '*'){
        cout << a << ' ' << k;
        cout << ' ' << b << " = ";
        cout << fixed  <<  setprecision(4) << a*b << endl;
    }else if(k == '/'){
        if(b == 0){
            cout << "ERROR\n";
            return 0;
        }
        cout << a << ' ' << k;
        cout << ' ' << b << " = ";
        cout << fixed  <<  setprecision(4) << a/b << endl;}
    

    return 0;
}