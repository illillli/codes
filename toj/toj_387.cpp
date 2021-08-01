#include <iostream>
using namespace std;

int main(){
    long long A, L,area;
    cin >> A >> L;
    area = L * L;
    for (int i = 0; i <= 100000;i++){
        if(area<=A){
            cout << i << endl;
            return 0;
        }else
        
        area = area / 2;
        

    }
}