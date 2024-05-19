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
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int ans = 0;
        set<int> s;

        for (int r = 0; r < n; r++)
        {
            while (s.find(v[r]) != s.end())
            {
                s.erase(v[l]);
                l++;
            }
            s.insert(v[r]);
            ans = max(ans, r - l + 1);
        }

        cout << ans << endl;
    }
}
