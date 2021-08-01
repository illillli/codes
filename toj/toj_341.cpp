#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c, d, N, result, k, p;
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> a >> b >> c >> d;
        k = (b * c / (6 * a * a)) - (b * b * b) / (27 * a * a * a) - d / (2 * a);
        p = (c / (3 * a) - (b * b) / (9 * a * a));
        result = (-1 * b / 3 * a) + cbrt(k + sqrt(k * k + p * p * p)) + cbrt(k - sqrt(k * k - p * p * p));
        cout << fixed << setprecision(3) << result << endl;
    }
    return 0;
}