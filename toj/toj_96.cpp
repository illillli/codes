#include<iostream>
using namespace std;

int main() {
    int a,c;
    char b;
    cin>>a>>b>>c;
    if (b=='/'){
        if(c==0){
            cout<<"ERROR\n";
        }else{
            int ANS,R;
            ANS=a/c;
            R=a%c;
            
            cout <<a<<" / "<<c<<" = "<<ANS<<" ... "<<R<<endl;
        }
        
    }
    if (b=='*'){
        int ANS;
        ANS=a*c;
        cout <<a<<" * "<<c<<" = "<<ANS<<endl;
    }
    if (b=='+'){
        int ANS;
        ANS=a+c;
        cout <<a<<" + "<<c<<" = "<<ANS<<endl;
    }
    if (b=='-'){
        int ANS;
        ANS=a-c;
        cout <<a<<" - "<<c<<" = "<<ANS<<endl;
    }

    return 0;
}
