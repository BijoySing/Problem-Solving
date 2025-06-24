#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T>
// using pbds = tree<T, nuint_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long 
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
        int n, l, r;
        cin >> n >> l >> r;
        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        // sort(a, a + n);
        int left = 1;
        int right = 1;
        int ans = 0;
        int sum = 0;
        while (right <= n)
        {

            sum += a[right];

            while (sum > r and left <= right)
            {
                sum -= a[left];
                left++;
            }
            if (sum >= l and sum <= r)
            {
                ans++;
                sum = 0;
                left = right + 1;
            }
            right++;
        }

        cout << ans << endl;
    }
}
