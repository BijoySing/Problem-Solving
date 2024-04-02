#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x, y;
                int s = 0;

                for (x = i, y = j; x >= 0 and y >= 0; x--, y--)
                {
                    s += a[x][y];
                }
                for (x = i + 1, y = j + 1; x < n and y < m; x++, y++)
                {
                    s += a[x][y];
                }

                for (x = i - 1, y = j + 1; x >= 0 and y < m; x--, y++)
                {
                    s += a[x][y];
                }

                for (x = i + 1, y = j - 1; x < n and y >= 0; x++, y--)
                {
                    s += a[x][y];
                }
                mx = max(mx, s);
            }
        }
        cout << mx << endl;
    }
}
