#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
typedef long long ll ;
// #define ll long long ll
// #define ll ll
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5+5;
bool vis[N];
vector<pair<ll, ll>> v[N];
ll dist[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> q;
    q.push({src, 0});
    // cout << src << endl;
    vis[src] = true;
    dist[src] = 0;
    while (!q.empty())
    {
        /* code */
        auto par = q.top();
        q.pop();
        ll node = par.first;
        ll cost = par.second;
        for (auto u : v[node])
        {
            ll childCost = u.second;
            ll childNode = u.first;
            // cout << childNode << " " << childCost << endl;

            if (cost + childCost < dist[childNode])
            {
                dist[childNode] = cost + childCost;
                q.push({childNode, dist[childNode]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;

    for (ll i = 1; i <= e; i++)
    {
        // Your code here
        ll x, y, w;
        cin >> x >> y >> w;
        v[x].push_back({y, w});
        // v[y].push_back({x, w});
    }
    for (ll i = 0; i <N; i++)
    {
        // Your code here
        dist[i] = LLONG_MAX;
    }
    // memset(vis,false,sizeof(vis));
    ll ss;
    cin >> ss;
    dijkstra(ss);
    ll q;
    cin >> q;
    while (q--)
    {
        ll d, dw;
        cin >> d >> dw;
        // ck(dist[ind])
        if(dist[d]<=dw)yes;
        else no;
        /* code */
    }

}