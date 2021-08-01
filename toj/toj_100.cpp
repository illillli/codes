#include<iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a=='A'){
        cout<<"@\n";
    }    
    else{
        cout<<char(a-1)<<"\n";
    }

    return 0;
}