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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        // vector<int> preOdd(n + 1, 0);
        int preOdd[n + 1];
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;

            int cnt = 0;
            for (auto x : mp)
            {
                if (x.second % 2 == 1)
                {
                    cnt++;
                    // ck(x.second);
                }
            }
            // ck(i);
            preOdd[i] = cnt;
            cout<<cnt<<" ";
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            // l--;
            int ans = preOdd[r - 1] - preOdd[l - 1];
            if (l == 1)
            {
                cout << preOdd[r - 1] << endl;
                continue;
            }
            else
                cout << ans << endl;
        }
    }
}
