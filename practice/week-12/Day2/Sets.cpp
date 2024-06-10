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
        vector<set<int>> v(n);
        set<int> sz;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vector<int> temp;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                sz.insert(x);
                v[i].insert(x);
            }
        }
        ans = 0;
        for (auto u : sz)
        {
            set<int> cnt;
            for (int i = 0; i < n; i++)
            {
                // cout<<v[i].count(u)<<" ";
                if (v[i].count(u))
                    continue;
                for (auto x : v[i])
                {
                    // cout << x << " ";
                    cnt.insert(x);
                }
                // cout<<endl;
                ans = max(ans, (int)cnt.size());
            }
        }

        cout << ans << endl;
    }
}
