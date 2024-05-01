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
        int a[n + 2], next[n + 2];

        bool f = true;

        int in, mx;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                in = i;
                mx = (n - i + 1) * i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
                continue;
            int sx = (n - i + 1) * i;
            if (sx > mx)
            {
                in = i;
                mx = sx;
            }
        }

        a[in]++;

        // cout<<in<<endl;

        for (int i = n; i >= 1; i--)
        {
            if (a[i] % 2 == 0)
            {
                in = i;
            }
            next[i] = in;
        }
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int now = next[i];
            if (now != -1)
            {
                ans += (n - now + 1);
            }
        }

        cout << ans << endl;
    }
}
