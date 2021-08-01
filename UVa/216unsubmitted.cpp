#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define io                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
void output(double i)
{
    cout << "min = " << i << '\n';
}

struct Point
{
    int x, y;
    double Dis(Point &p)
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
} point[8];

double dis[8][8];
double _min = (1e10);
int n, seq[8], min_seq[8];
bool visit[8];
void dfs(int prev, int count, double len)
{
    if (count > n)
    {
        if (len < _min)
        {
            _min = len;
            for (int i = 0; i < n; i++)
            {
                min_seq[i] = seq[i];
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            visit[i] = 1;
            seq[count-1] = i;
            dfs(i, count + 1, len + dis[prev][i]);
            visit[i] = 0;
        }
    }
}
int main()
{
    io;
    int cas = 0;
    while (cin >> n && n)
    { //if n==0 then stop
        cout << "**********************************************************\n";
        cas++;
        for (auto p : seq)
            p = 0;
        _min = (1e10);
        for (int i = 0; i < n; i++)
            cin >> point[i].x >> point[i].y;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                dis[i][j] = dis[j][i] = point[i].Dis(point[j]);
            }
        for (int i = 0; i < n; i++)
        {
            for (auto p : visit)
                p = 0;
            dfs(i, 1, 0);
        }

        //output
        cout << "Network #" << cas << '\n';
        for (int i = 1; i < n; i++)
        {
            cout << "Cable requirement to connect (" << point[min_seq[i]].x << "," << point[min_seq[i]].y << ") to (";
            cout << point[min_seq[i + 1]].x << "," << point[min_seq[i + 1]].y << ") is " << fixed << setprecision(2) << dis[min_seq[i]][min_seq[i + 1]] + 16 << " feet.\n";
        }
        cout << "Number of feet of cable required is " << _min + (16.0) * (n - 1) << ".\n";
    }

    return 0;
}