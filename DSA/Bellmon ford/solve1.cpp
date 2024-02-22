#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
// Some code
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int32_t main()
{
    // Some code
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] < LLONG_MAX and dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (int i = 1; i <=n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] < INT_MAX and dis[u] + c < dis[v])
            {
                cycle = true;
            }
        }
    }
    // cycle ? cout << "Cycle Found!" : cout << "No Cycle";
    int q;
    cin >> q;
    if(cycle)cout<<"Negative Cycle Detected";
    else{

    while (q--)
    {
        int x;
        cin >> x;
        if (dis[x] == LLONG_MAX)
            pp("Not Possible");
        else
            cout << dis[x] << endl;
    }
    }
    // for (int i = 1; i <= n; i++)
    //     cout << i << " -> " << dis[i] << endl;
}