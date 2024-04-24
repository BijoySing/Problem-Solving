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
        ll c[25];

        ll n, l, r, x, ans = 0;
        cin >> n >> l >> r >> x;
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int b = 0; b < (1 << n); b++)
        {
            int cnt = 0;
            ll sum = 0, mn = INT_MAX, mx = 0;
            for (int j = 0; j < n; j++)
                if ((b >> j) & 1)
                {
                    cnt++;
                    sum += c[j];
                    mn = min(mn, c[j]);
                    mx = max(mx, c[j]);
                }
            if (cnt >= 2 && (sum >= l && sum <= r) && mx - mn >= x)
                ans++;
        }
        cout << ans << endl;
    }
}
