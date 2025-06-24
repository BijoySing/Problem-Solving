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
        string s, sa, sb;
        cin >> s;
        int n = s.size();
        int a, b;
        a = b = 0;
        sa += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] > '0')
                break;
            sa += s[i];
        }
        for (int i = sa.size(); i < n; i++)
        {
            sb += s[i];
        }
        a = stoi(sa);
        if (!sb.empty())
            b = stoi(sb);
        if (a >= b)
            pp(-1);
        else
            cout << sa << " " << sb << endl;
    }
    return 0;
}