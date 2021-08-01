#include <iostream>
using namespace std;

int main(){
    long long a, b,result=1;
    cin >> a >> b;
    if(a>=b){
        swap(a, b);
    }
    for (int i = a; i <= b;i++){
        result = result * i;
    }
    cout << result<< endl;
    return 0;
}