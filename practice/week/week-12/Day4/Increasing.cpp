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
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] != 1)
            v.push_back(1);
        else
            v.pb(2);
        for (int i = 1; i < n; i++)
        {
            int x = v.back()+1;
            if (a[i] == x)
            {
                v.push_back(a[i] + 1);
            }
            else
            {

                v.push_back(x);
            }
        }
        // for (auto u : v)
            // cout << u << " ";
        // cout << endl;
        cout << v[n - 1] << endl;
    }
}
