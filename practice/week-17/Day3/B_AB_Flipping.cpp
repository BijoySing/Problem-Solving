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
        string s;
        cin >> s;
        // reverse(s.begin(), s.end());

        int cnt = 0, ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                cnt++;
            }
            else
            {
                ans += cnt;
                if (cnt)
                    cnt = 1;
                else
                    cnt = 0;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}