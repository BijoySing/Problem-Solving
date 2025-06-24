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
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;
        int ans = 0;
        stack<char> a;
        for (int i = 0; i < n; i++)
        {
            if (a.empty())
            {
                a.push(s[i]);
            }
            else if (a.top() != s[i])
            {
                a.push(s[i]);
            }
            else
            {
                a.pop();
                ans = 1 - ans;
            }
        }
        if (ans)
        {
            yes;
        }
        else
        {
            no;
        }
        return 0;
    }
}