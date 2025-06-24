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

bool ok(long long m, int n, int t, int a[]) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += (m / a[i]);
        if (total >= t) {
            return true;
        }
    }
    return false;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        int n, t;
        cin >> n >> t;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long l = 1, r = 1e18, mid, ans;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (ok(mid, n, t, a)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
