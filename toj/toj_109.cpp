#include<iostream>

using namespace std;

int main() {
    int a,b,n,result=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a >> b;
        a -= b;
        if(a == -2 || a == -3 || a == 5){
            result += 1;
        
        }else if(a == 2 || a == 3 || a == -5){
            result -= 1;
        
        }
        
    }
    if (result == 0){
        cout << "The referee wins." <<endl;
        
    }else if (result > 0){
        cout << "The prince wins." <<endl;
        
    }else if (result < 0){
        cout << "The princess wins." <<endl;
        
    }

    return 0;
}
