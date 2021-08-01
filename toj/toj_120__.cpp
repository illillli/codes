#include <iostream>
using namespace std;

int main(){

    int tree[200005];
    int result[200005] = {0};
    int n,q,a,b;
    cin >> n;

    for (int i = 1; i <= n;i++){
        cin >> tree[i];
    }

    cin >> q;

    for (int i = 1; i <= q;i++){
        cin >> a >> b;
        for (int j = a; j <= b;j++){
            result[i] = result[i] + tree[j];
        }
    }

    for (int i = 1; i <= q;i++){
        cout << result[i] << endl;

    }

    return 0;
}