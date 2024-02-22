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

int32_t main()
{
    int t = 1;
    while (t--)
    {
        int n, e;

        cin >> n >> e;
        vector<int> v[n];

        for (int i = 0; i < e; i++)
        {
            // Your code here
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int q;
        cin >> q;
        int c = 1, f = 0;
        while (q--)
        {
            vector<int> g;
            int a, b;
            f = 0;
            // cout << c++ << "->  ";
            cin >> a;
            if (v[a].size())
            {
                for (auto u : v[a])
                {
                    g.push_back(u);
                    // cout<<u<<" ";
                }
                sort(g.rbegin(), g.rend());
                for (auto u : g)
                    cout << u << " ";
                cout << endl;
            }
            else cout<<-1<<endl;
        }
    }
}