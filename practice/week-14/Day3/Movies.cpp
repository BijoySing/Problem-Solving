#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ra = 0;
        int rb = 0;
        int pp = 0;
        int mm = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                ra += a[i];
            }
            if (a[i] < b[i])
            {
                rb += b[i];
            }
            if (a[i] == 1 && b[i] == 1)
            {
                pp += 1;
            }
            if (a[i] == -1 && b[i] == -1)
            {
                mm += 1;
            }
        }
        for (int i = 0; i < mm; i++)
        {
            if (ra > rb)
            {
                ra -= 1;
            }
            else
            {
                rb -= 1;
            }
        }
        for (int i = 0; i < pp; i++)
        {
            if (ra < rb)
            {
                ra += 1;
            }
            else
            {
                rb += 1;
            }
        }
        cout << min(ra, rb) << '\n';
    }
}
