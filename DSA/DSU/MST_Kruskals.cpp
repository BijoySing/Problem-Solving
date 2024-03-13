#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
// #define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5 + 5;
int par[N];
int level[N];
int gsize[N];
class edge
{
public:
    int u, v, w;
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }

};
 void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Your code here
        par[i] = -1;
        gsize[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int n)
{
    if (par[n] == -1)
        return n;
    int leader = dsu_find(par[n]);
    par[n] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}
void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderA] < level[leaderB])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (gsize[leaderA] > gsize[leaderB])
    {
        par[leaderB] = leaderA;
        gsize[leaderA] += gsize[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        gsize[leaderB] += gsize[leaderA];
    }
}
bool cmp(edge a, edge b)
{
    return a.w < b.w;
}
int32_t main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for (edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    cout << totalCost << endl;
    return 0;
}