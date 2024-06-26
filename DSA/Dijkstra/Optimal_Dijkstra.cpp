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
vector<pair<int, int>> v[N];
int dist[N];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
    q.push({src, 0});
    // cout << src << endl;
    vis[src] = true;
    dist[src] = 0;
    while (!q.empty())
    {
        /* code */
        auto par = q.top();
        q.pop();
        int node = par.first;
        int cost = par.second;
        for (auto u : v[node])
        {
            int childCost = u.second;
            int childNode = u.first;
            // cout << childNode << " " << childCost << endl;

            if (cost + childCost < dist[childNode])
            {
                dist[childNode] = cost + childCost;
                q.push({childNode, childCost});
            }
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
        int x, y, w;
        cin >> x >> y >> w;
        v[x].push_back({y, w});
        v[y].push_back({x, w});
    }
    for (int i = 0; i < n; i++)
    {
        // Your code here
        dist[i] = INT_MAX;
    }
    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << "-cost-->" << dist[i] << endl;
    }
    // int src;
    // cin >> src;
    // dijkstra(0);
}