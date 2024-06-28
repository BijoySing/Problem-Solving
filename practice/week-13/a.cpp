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
        string a, b;
        cin >> a >> b;
        // string ans = a;
        //     unordered_set<char> s;
        //     sort(a.begin(), a.end());
        //     for (int i = 0; i < a.size(); i++)
        //     {
        //         s.insert(a[i]);
        //     }
        //     // sort(s.begin(), s.end());

        //     for (char ch : b)
        //     {
        //         if (s.find(ch) == s.end())
        //         {
        //             ans += ch;
        //             s.insert(ch);
        //         }
        //     }

        // cout << ans.length() << endl;
        int n = a.size();
        int m = b.size();
        int ans = m;
        int mn = min(n, m);
        for (int i = 0; i < mn; i++)
        {
            int c = i;
            int d = i;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == b[d])
                {
                    d++;
                    if (d == m)
                    {
                        break;
                    }
                }
            }

            ans = min(ans, c + m - d);
        }
        cout << ans + n << endl;
    }
}