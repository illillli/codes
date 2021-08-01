#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    if(2<N&&N<6) {
        cout <<"Spring!\n";

    }else if(5<N&&N<9) {
        cout <<"Summer!\n";

    }else if(8<N&&N<12) {
        cout <<"Autumn!\n";

    }else if(11<N) {
        cout <<"Winter!\n";

    }else if(N<3) {
        cout <<"Winter!\n";}
    return 0;
}
