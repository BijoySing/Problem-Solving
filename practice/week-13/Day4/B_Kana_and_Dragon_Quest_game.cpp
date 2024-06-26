#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        bool ok = false;

        while (n > 0 && x > 20)
        {
            x = x / 2 + 10;
            n--;
        }

        //     x = x / 2 + 10;
        //     n--;

        //     // cout << "n: " << x << endl;
        // }
        //    cout<<x<<endl;
        if (m * 10 >= x)
            yes;
        else
            no;
    }
}