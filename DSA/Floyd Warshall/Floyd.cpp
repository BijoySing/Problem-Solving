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
    int n;
    cin >> n;
    int adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            int x;
            cin >> x;
            if (x == -1)
            {
                adj[i][j] = INT_MAX;
            }
            else if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = x;
        }
    }

    // for (int j = 0; j < e; j++)
    // {
    //     int u, v, w;
    //     cin >> u >> v >> w;
    //     adj[u][v] = w;
    // }
    int ans = 0;
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
    // }
    // int flag = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (adj[i][i] < 0)
    //     {

    //         // flag = 1;
    //         break;
    //     }
    // }
    // if (flag)
    //     cout << "Cycle detected" << endl;
    // else

    for (int i = 1; i <= n; i++)
    {
        // cout << i << "-";
        for (int j = 1; j <= n; j++)
        {
            // if (adj[i][j] ==INT_MAX)
            //     cout << "\t♾️ ";
            // else
            ans = max(ans, adj[i][j]);

            // cout << adj[i][j] << " "; // Use '\t' for tab separation
        }
        // cout << std::endl;
    }
    cout << ans << endl;
}