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
        string s, t;
        cin >> s >> t;
        if (s[0] == t[0])
        {
            cout << "YES\n"
                 << s[0] << "*\n";
            continue;
        }
        if (s.back() == t.back())
        {
            cout << "YES\n"
                 << "*" << s.back() << "\n";
            continue;
        }
        int flag = 0;
        for (int i = 1; i < s.size(); i++)
        {
            for (int j = 1; j < t.size(); j++)
            {
                if (s.substr(i - 1, 2) == t.substr(j - 1, 2))
                {
                    flag = 1;
                    cout << "YES\n"
                         << "*" << s.substr(i - 1, 2) << "*\n";
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << "NO\n";
    }
}