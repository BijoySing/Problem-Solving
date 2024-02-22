#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5;
int n, e;
vector<int> adj[N];
bool flag;
bool vis[N];
int parentArray[N];
bool ans;
bool pathVisit[N];
void dfs(int par)
{
    vis[par] = true;
    pathVisit[par] = true;
    for (int u : adj[par])
    {
        if (pathVisit[u])
        {
            ans = true;
        }
        if (!vis[u])
        {
            dfs(u);
        }
    }
        pathVisit[par] = false;
}

int32_t main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
       if (ans)
        cout << "Cycle Detected" << endl;
    else
        cout << "Not Found" << endl;
}