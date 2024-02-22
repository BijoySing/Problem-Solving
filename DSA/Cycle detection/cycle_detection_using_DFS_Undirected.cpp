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
void dfs(int par)
{
    vis[par] = true;
    for (auto u : adj[par])
    {
        if (vis[u] and parentArray[par] != u)
        {
            ans = true;
        }
        if (!vis[u])
        {
            vis[u] = true;

            parentArray[u] = par;
            dfs(u);
        }
    }
}

int32_t main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        /* code */
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