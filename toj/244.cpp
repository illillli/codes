#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string input;
    cin >> t >> input;
    for (int i = 0; i < t; i++)
    {
        if (input[i] >= 97)
        {
            input[i] -= 32;
        }else
            input[i] += 32;
    }
    cout << (string)(input) << '\n';
    return 0;
}