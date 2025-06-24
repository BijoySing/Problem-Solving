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
        string s, s1;
        cin >> s;
        s1 = s;
        sort(s.begin(), s.end());
        // reverse(s.begin(), s.end());
        string ans = "";
        int l = 0, r = n - 1;

        while (l <= r)
        {
            if (ans.empty() || ans.back() != s[l])
            {
                ans += s[l++];
            }
            if (l <= r && ans.back() != s[r])
            {
                ans += s[r--];
            }
        }

        cout << ans << endl;
    }
    return 0;
}