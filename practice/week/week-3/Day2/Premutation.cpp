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
    // cin >> t;
    while (t--)
    {

        int n, i, j, k;
        cin >> n;
        int a[n + 5][n + 5];
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int first[n + 5] = {};
        vector<int> v[n + 5], vv[n + 5];
        for (i = 1; i < 2; i++)
        {
            int cnt[n + 5] = {};
            for (j = 1; j <= n; j++)
            {
                cnt[a[j][i]]++;
            }
            for (k = 1; k <= n; k++)
                if (cnt[k] == n - i)
                    break;
            for (j = 1; j <= n; j++)
            {
                if (a[j][i] != k)
                {
                    break;
                }
            }
            cout << k << ' ';
            for (k = 1; k < n; k++)
                cout << a[j][k] << ' ';
            cout << endl;
        }
    }
}