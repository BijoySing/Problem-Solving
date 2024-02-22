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
bool vis[N];
vector<int> v[N];
void dfs(int src)
{
    vis[src] = true;
    cout << src << " ";
    for (auto u : v[src])
    {
        if (!vis[u])
        {
            vis[u] = true;
            dfs(u);
        }
    }
}
int32_t main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        // Your code here
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int src;
    cin >> src;
    dfs(src);
}