#include<iostream>
using namespace std;

int main() {
    int c,i;
    cin >> c;
    int ANS[c];
    for(i=0; i<c; i++) {


        int a,b;
        cin >> a >> b;

        while(a!=0 && b!=0) {
            if(a>=b) {
                a=a%b;
            } else if(b>=a) {
                b=b%a;
            }
        }
        if(a>=b) {
            ANS[i]=a;
        }
        if(b>=a) {
            ANS[i]=b;
        }
    }
    for(i=0; i<c; i++) {
        cout<<ANS[i]<<endl;
    }



    return 0;
}
