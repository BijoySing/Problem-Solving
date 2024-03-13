#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long int
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int32_t main()
{
    int n, e;
    cin >> n >> e;
    int adj[n + 2][n + 2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = 1e18;
        }
    }

    for (int j = 0; j < e; j++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        //   cout << u << " " << v << " " << w << endl;
        // cout << adj[u][v] << endl;

        if (adj[u][v] != 1e18 and adj[u][v] < w)
        {
            // adj[u][v] = w;
            // ck(u<<v);
            // cout << u << " " << v << " " << w << endl;
        }
        else
        {
            // cout<<adj[u][v]<<endl;
            adj[u][v] = w;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        if (adj[x][y] == 1e18)
            cout << -1 << endl;
        else
            cout << adj[x][y] << endl;
    }
}
