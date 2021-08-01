#include <iostream>
using namespace std;

int main(){
    long long G[100];
    G[0] = 0;
    G[1] = 1;
    for (int i = 2; i <= 95;i++){
        G[i] = G[(i - 2)] - G[(i - 1)];
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        int x;
        cin >> x;
        cout << "G("<<x<<") = "<<G[x] << endl;
    }
    return 0;
}