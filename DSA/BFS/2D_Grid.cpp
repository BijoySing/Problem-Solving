#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5 + 5;

bool vis[120][120];
int dis[120][120];
int dx[8] = {2, 2, 1, 1, -2, -2, -1, -1};
int dy[8] = {-1, 1, 2, -2, 1, -1, 2, -2};
int adj[120][120];

bool valid(int i, int j, int n, int m)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = a + dx[i];
            int cj = b + dy[i];

            if (valid(ci, cj, n, m) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                adj[ci][cj] = 1;
            }
        }
    }
}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                adj[i][j] = 0;
            }
        }

        int si, sj, di, dj;
        cin >> si >> sj >> di >> dj;

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        bfs(si, sj, n, m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
               cout<< adj[i][j]<<" ";
            }
            cout<<endl;
        }
        cout << dis[di][dj] << endl;
    }

    return 0;
}
