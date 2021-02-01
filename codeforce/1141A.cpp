#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll start, end, steps = 0;
    cin >> start >> end;
    if (end % start)
    {
        cout << "-1" << '\n';
        return 0;
    }
    end /= start;
    while (end % 3 == 0)
    {
        end /= 3;
        steps++;
    }
    while (end % 2 == 0)
    {
        end /= 2;
        steps++;
    }
    if(end==1){
        cout << steps << '\n';
    }else
        cout << "-1\n";
}