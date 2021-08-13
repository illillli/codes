#include <bits/stdc++.h>
#define int long long
#define pll pair<long long, long long>
#define PB emplace_back
#define endl "\n"
#define mod (int)(1E9 + 7)
#define llinf 9223372036854775807
#define intinf 2147483647
#define pi acos(-1)
const int maxN = 1e5 + 5;
using namespace std;

int t, n;
string s;
stack<int> num;
stack<char> sym;
int arr[maxN];
signed main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    getline(cin, s);
    n = s.size();
    int numb = 0, k = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        //cout << "num " << num.size() << " symbol " << sym.size() << endl;
        if (s[i] == ' ')
        {
            //cout << "space!" << endl;
            continue;
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            numb = numb + k * (s[i] - '0');
            if (i - 1 >= 0 && s[i - 1] >= '0' && s[i - 1] <= '9')
            {
                k *= 10;
            }
            else
            {
                num.push(numb);
                numb = 0, k = 1;
            }
            //cout << "push num " << (int)(s[i] - '0') << endl;
        }
        else
            sym.push(s[i]);

        if (!sym.empty() && sym.top() == '(')
        {
            sym.pop();
            while (sym.top() != ')')
            {
                char temp = sym.top();
                sym.pop();
                int a = num.top();
                num.pop();
                int b = num.top();
                num.pop();
                if (temp == '+')
                    num.push(a + b);
                else
                    num.push(a - b);
            }
            if (sym.top() == ')')
                sym.pop();
        }
    }
    while (!sym.empty())
    {
        char temp = sym.top();
        sym.pop();
        int a = num.top();
        num.pop();
        int b = num.top();
        num.pop();
        if (temp == '+')
            num.push(a + b);
        else
            num.push(a - b);
    }
    cout << num.top() << endl;
}