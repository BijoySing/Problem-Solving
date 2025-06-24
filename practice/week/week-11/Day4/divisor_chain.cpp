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
        ll n;
        cin >> n;
        int logn = __lg(n);
        vector<int> ans;
        for (int i = 0; i < logn; ++i)
        {
            if ((1 << i) & n)
            {
                ans.push_back(1 << i);
                // cout << (1<<i)<< " ";
            }
        }
        // cout << endl;
        for (int i = logn - 1; i >= 0; --i)
        {
            ans.push_back(1 << i);
            // cout << (1 << i) << " ";
        }
        cout << (int)ans.size() + 1 << endl;
        cout << n << ' ';
        int now = n;
        for (int i = 0; i < (int)ans.size(); ++i)
        {
            // cout << ans[i] << " ";
            cout << now - ans[i] << ' ';
            now -= ans[i];
        }
        cout << endl;
    }
}
