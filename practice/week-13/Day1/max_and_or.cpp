#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 30; i >= 0; i--) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if ((a[j] & (1 << i)) == 0) {
                    cnt++;
                }
            }
            if (cnt > k) continue;
            k -= cnt;
            ans += (1LL << i);
        }

        cout << ans << endl;
    }
}
