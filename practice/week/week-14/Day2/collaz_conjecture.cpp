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
        int x, y, k;
        cin >> x >> y >> k;

        while (x != 1 and k)
        {
            int need = min(y - x % y, k);
            x += need;
            k -= need;
            while (x % y == 0)
                x /= y;
        }

        if (k == 0)
        
            cout << x << endl;
        else
        {
            assert(x == 1);
            cout << 1 + k % (y - 1) << endl;
        }
    }
}
