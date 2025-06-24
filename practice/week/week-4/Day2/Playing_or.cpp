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
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        vector<int> v;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                c++;
            v.push_back(c);
        }
        int ans = 0;
        // ck(v[k - 1]);
        if (v[k - 1])
            ans++;
        for (int i = 1; i <= n - k; i++)
        {
            int x = v[k + i - 1] - v[i - 1];
            if (x)
                ans++;
        }
        cout << ans << endl;
    }
}
