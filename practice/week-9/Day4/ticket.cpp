#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            auto ans = s.upper_bound(b[i]);
            // ck(ans);
            if (ans != s.begin())
            {
                ans--;
                cout << *ans << endl;
                s.erase(ans);}
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
