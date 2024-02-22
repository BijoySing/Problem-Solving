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
int dx[8] = {2, 2, 1, 1, -2, -2, -1, -1};
int dy[8] = {-1, 1, 2, -2, 1, -1, 2, -2};
int n, m;
int si, sj, di, dj;
int s, d;
bool flag;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int src, int dest)
{
    vis[src][dest] = true;
    for (int i = 0; i < 8; i++)
    {

        int x = src + dx[i];
        int y = dest + dy[i];
        if (valid(x, y) && vis[x][y] == false)
        {
            cout << " (" << x << "," << y << ") ,";
            cout<<endl;
            s = x;
            d = y;
            if (di == s and dj == y)
            {

                flag = true;
                // cout << " (" << x << "," << y << ") ,";

                // cout<<
                break;
            }
            dfs(x, y);
        }
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                a[i][j] = 0;
            }
        }
        int si, sj;
        cin >> si >> sj;
        cin >> di >> dj;
        memset(vis, false, sizeof(vis));
        dfs(si, sj);
        if (flag || (si == di and sj == dj))
            yes;
        else
            no;
    }
}