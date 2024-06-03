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
    // cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        // int a[n];
        vector<int> a(n);

        // int pre[n + 4];
        vector<int> pre(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     pre[i] += a[i];
        // }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            // int x = r - l + 1;
            pre[l]++;
            pre[r + 1]--;
        }
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + pre[i];
        }
        // ck(a[0]);
        // sort(a, a + n, greater<int>());
        sort(a.rbegin(),a.rend());
        // sort(pre + 1, pre + n + 1);
        sort(pre.rbegin(), pre.rend());

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (1LL * pre[i] * a[i]);
        }
        cout << ans << '\n';
        // return 0;
    }
}
