#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// vector<int>v[20];
int g[10000][10000];
int n, m;

bool vis[10000][10000];
bool valid(int x, int y)
{
    return !vis[x][y] && g[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(pair<int, int> st)
{
    queue<pair<int, int>> q;
    q.push(st);
    vis[st.first][st.second] = true;
    while (!q.empty())
    {
        auto par = q.front(); /* code */
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x + dx[i];
            int b = y + dy[i];
            if (valid(a, b))
            {
                q.push({a, b});
                vis[a][b] = true;
            }
        }
    }
}
int32_t main()
{
    int t = 1;
    pair<int, int> st, dt;
    vector<pair<int, int>> nodes;
    while (t--)
    {
        cin >> n >> m;
        int node = 0;
        for (int i = 0; i < n; i++)
        {
            // Your code here\=
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                if (s[j] == '#')
                    g[i][j] = -1;
                else
                {
                    nodes.push_back({i, j});
                    node++;
                }
            }
        }
        int c = 0;
        for (int i = 0; i < node; i++)
        {
            if (!vis[nodes[i].first][nodes[i].second])
            {
                bfs(nodes[i]);
                c++;
            }
        }
        cout<<c<<endl;

    }
}