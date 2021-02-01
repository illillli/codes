#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, sum = 0;
    vector<int> input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        input.push_back(temp);
    }
    for (int i = input.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i ; j++)
        {
            if (input[j] > input[j + 1])
            {
                swap(input.at(j), input.at(j + 1));
                sum++;
            }
        }
    }
    cout << sum << '\n';
    return 0;
}