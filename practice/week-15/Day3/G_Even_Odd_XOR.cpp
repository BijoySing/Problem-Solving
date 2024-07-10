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
        int n;
        cin >> n;

        if (n % 4 == 0)
        {
            ll cn = 2;
            for (int i = 1; i <= n; ++i)
                cout << cn++ << " ";
            cout << endl;
        }
        else if (n % 4 == 1)
        {
            cout << 0 << " ";
            ll cn = 2;
            for (int i = 1; i <= n - 1; ++i)
                cout << cn++ << " ";
            cout << endl;
        }
        else if (n % 4 == 3)
        {
            cout << 2 << " " << 1 << " " << 3 << " ";
            ll cn = 4;
            for (int i = 1; i <= n - 3; ++i)
                cout << cn++ << " ";
            cout << endl;
        }
        else
        {
            ll cn = 14;
            cout << 2 << " " << 3 << " " << 1 << " " << 4 << " " << 8 << " " << 12 << " ";
            for (int i = 1; i <= n - 6; ++i)
                cout << cn++ << " ";
            cout << endl;
        }
    }
    return 0;
}
