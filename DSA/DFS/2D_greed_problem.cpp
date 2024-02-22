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
char a[20][20];
bool vis[20][20];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int n, m;
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
        if (valid(x, y) && vis[x][y] == false)
        {
            cout << " ("<<x << "," << y << ") ,"<<endl;;
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
            
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
}