#include<iostream>
using namespace std;

int main() {
    float a,b,c,d,result;
    cin >>a>>b>>c>>d;
    result=(int)(a*d-c*b);
    if(result<0.00000009 &&result>-0.00000009){
        cout<<"0\n";
    }else{
        cout<<"1\n";
    }

        return 0;
}
