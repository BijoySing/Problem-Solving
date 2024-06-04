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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end());
        int tot = 0;
        for (int i = 0; i <= 2 * n; i++)
        {
            int cnt = 0;
            int a = 0;
            int b = n - 1;
            while (a < b)
            {
                if (v[a] + v[b] == i)
                {
                    cnt++;
                    a++;
                    b--;
                    continue;
                }
                if (v[a] + v[b] < i)
                {
                    a++;
                    continue;
                }
                if (v[a] + v[b] > i)
                {
                    b--;
                    continue;
                }
            }
            tot = max(tot, cnt);
        }
        cout << tot << endl;
    }
}