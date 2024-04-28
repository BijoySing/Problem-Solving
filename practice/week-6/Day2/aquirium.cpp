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

bool ok(ll a[], ll n, ll x, ll mid) {
    ll curr = x;
    for (ll i = 0; i < n; i++) {
        if (mid > a[i]) {
            curr -= (mid - a[i]);
        }
    }
    return (curr >= 0);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll l = 1, r = 1e12, mid, ans = 1;

        while (l <= r) {
            mid = (l + (r - l) / 2);
            if (ok(a, n, x, mid)) {
                ans = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
