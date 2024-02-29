#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int g[1000][1000];
int n, m;
char gh[1000][1000];

int dis[1120][1120];
bool vis[1000][1000];
// vector<pair<int, int>> path;
pair<int, int> path[1000][1000];
bool valid(int x, int y)
{
    return !vis[x][y] && g[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(pair<int, int> st)
{
    queue<pair<int, int>> q;
    q.push(st);
    vis[st.first][st.second] = true;
    dis[st.first][st.second] = 0;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x + dx[i];
            int b = y + dy[i];
            if (valid(a, b) and !vis[a][b])
            {
                q.push({a, b});
                vis[a][b] = true;
                dis[a][b] = dis[x][y] + 1;
                // cout << x << y << " ";
                // gh[x][y] = ';
                path[a][b] = {dx[i], dy[i]};
            }
        }
    }
}

int32_t main()
{
    int t = 1;
    pair<int, int> st, dt;

    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                gh[i][j] = s[j];
                if (s[j] == '#')
                {
                    g[i][j] = -1;
                    vis[i][j] = true;
                }
                if (s[j] == 'R')
                    st = {i, j};
                if (s[j] == 'D')
                    dt = {i, j};
            }
        }
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        memset(path, -1, sizeof(path));

        bfs(st);

        if (vis[dt.first][dt.second])
        {
            vector<pair<int, int>> ans;
            pair<int, int> dest = {dt.first, dt.second};
            while (dest.first != st.first or dest.second != st.second)
            {
                ans.push_back({path[dest.first][dest.second]});
            //   cout << dest.first << dest.second << " ";
                gh[dest.first][dest.second] = 'X';

                dest.first -= ans.back().first;
                dest.second -= ans.back().second;

                /* code */
            }
        }

        gh[dt.first][dt.second] = 'D';

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                cout << gh[i][j];
            }
            cout << endl;
        }
    }
}
