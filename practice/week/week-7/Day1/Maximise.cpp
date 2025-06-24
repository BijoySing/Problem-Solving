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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), v;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 1; i < n; i++)
        {
            int x = abs(a[i] - a[i - 1]);
            v.pb(x);
        }
        // sort(v.begin(), v.end());
        int ans = INT_MAX;
        if (n >= 2)
        {
            ans = min(ans, v[0]);
            ans = min(ans, v[n - 2]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int mx = max(v[i + 1], v[i]);
            ans = min(ans, mx);
        }

        cout << ans << "\n";
    }
}
