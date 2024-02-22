// Same Component
// 2D_greed_problem
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N=1e4+5;
char a[N][N];
bool vis[N][N];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int n, m;
int s, d;
int di, dj;
bool flag = 0;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int src, int dest)
{
    vis[src][dest] = true;
    for (int i = 0; i < 4; i++)
    {

        int x = src + dx[i];
        int y = dest + dy[i];
        if (a[x][y] and valid(x, y) && vis[x][y] == false)
        {
            // cout << " ("<<x << "," << y << ") ,";
            s = x;
            d = y;
            if (di == s and dj == y)
            {
                flag = true;
            }
            dfs(x, y);
        }
    }
}
int32_t main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == '-')
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }
    int si, sj;
    cin >> si >> sj;
    cin >> di >> dj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    if(flag || (si==di and sj==dj) )yes;
    else no;
}