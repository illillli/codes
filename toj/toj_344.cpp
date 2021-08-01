#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long input[100000],n;
    long long result=0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> input[i];
        result = result + input[i];
    }
    result = result / n;
    if(result<=1000){
        for (int i = 1; i <= n;i++){
            if(input[i]<1000){
                input[i] = sqrt(input[i]) * 100;
            }
        }
        result = 0;
        for (int i = 1; i <= n; i++){
            result = result + input[i];
        }
        result = result / n;
    }
    
    cout << result << endl;
    return 0;
}