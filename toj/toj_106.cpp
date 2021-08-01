#include<iostream>
using namespace std;

int main() {
    int n=2;
    for (int i=1;i<=1000000;i++){
        n=2*n+1;
        if(n%71 == 0){
            break;
        }
        
        
    }
    if(n%3 == 0){
        cout << "right" << endl;
    }else {
        cout << "left" << endl; 
    }

    return 0;
}
