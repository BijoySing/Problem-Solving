#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int

#define pp(x) cout << x << "\n"
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int o = 0;
        ll e = 1e9 + 7;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] % e;
            if (a[i] == 1)
                o++;
        }
        sort(a, a + n);
        int x = 1;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ans <= 1||a[i]==1)
                ans += a[i];
            else
            {
                // a[i] %= e;
                ans *= a[i];
                ans %= e;
            }
        }
        cout << ans % e << endl;
    }
}
