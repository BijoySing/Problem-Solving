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

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        for (auto u : adj[par])
        {
            if (vis[u] == true and parentArray[par] != u)
            {
                ans = true;
                // ck(u);
            }
            if (!vis[u])
            {
                q.push(u);
                vis[u] = true;
                parentArray[u]=par;

            }
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
            bfs(i);
        }
    }
    if(ans)cout<<"Cycle Detected"<<endl;
    else cout<<"Not Found"<<endl;
}