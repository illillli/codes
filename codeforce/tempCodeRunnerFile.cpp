#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll start, end, steps = 0;
    cin >> start >> end;
    start /= end;
    if (start % 3 != 0 || start % 2 != 0)
    {
        cout << "-1" << '\n';
        return 0;
    }

    while (start != 1)
    {
        if (start % 2 == 0)
        {
            start /= 2;
            steps += 1;
        }
        if(start%3==0){
            start /= 3;
            steps += 1;
        }
    }
    cout << steps << '\n';
    return 0;
}