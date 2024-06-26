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
vector<int> ans;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val = 32678;
        int x = n;
        int cnt = 0;
        int f = 0;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            int q = 32768, c = 0, z = 15;
            for (int j = 0; j <= 15; j++)
            {
                int ans = a[i] + j;
                c = 0;
                while (ans % q != 0)
                {
                    ans *= 2;
                    c++;
                }
                z = min(j + c, z);
            }
            cout << z << " ";
        }
    }
}
