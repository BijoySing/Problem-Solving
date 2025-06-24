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
int n;
bool check(int mid, int k, int a[])
{
    int cur = 0;
    // ck(n);
    for (int i = n / 2; i < n; i++)
    {
        if (mid > a[i])
            cur += mid - a[i];
    }
    return cur <= k;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int l = 1, r = 2e9;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, k, a))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
}
