#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int k = 64 + n - i;
        cout << string(i, ' ');
        cout << string(2*n - 2*i - 1, char(k));
        cout << endl;
    }
    return 0;
}