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
        int a[n];
        vector<int> v, m, x;
        int mn = INT_MAX, mx = 0, xx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        if (mn == a[0] || mx == a[n - 1])
            cout << mx - mn << endl;
        else
        {
            int ans = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                ans = max(ans, a[(i - 1 + n) % n] - a[i]);
            }

            for (int i = 1; i < n; ++i)
            {
                ans = max(ans, a[i] - a[0]);
            }

            for (int i = 0; i < n - 1; ++i)
            {
                ans = max(ans, a[n - 1] - a[i]);
            }
            cout << ans << endl;
        }
    }
}
