#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define output(x) cout << x << endl
#define print(x) cout << #x << " = " << x << endl
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi acos(-1)
#define sz 100005

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, c, d, i, j, k = 0;
        cin >> n >> c >> d;
        ll a[n + 5];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            k += a[i];
        }
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);

        if (a[1] * d < c)
        {
            cout << "Impossible\n";
            continue;
        }
        ll sum[n + 5] = {};
        for (i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
        }
        ll ans = 0;
        for (i = 0; i <= d + 1; i++)
        {
            j = min(i + 1, n);
            ll cur = sum[j] * (d / (i + 1)) + sum[min(n, d % ((i + 1)))];
            if (cur >= c)
            {
                ans = i;
            }
        }
        if (ans == d + 1)
        {
            cout << "Infinity\n";
            continue;
        }
        cout << ans << endl;
    }
    return 0;
}