#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        ll A, B, K;
        cin >> A >> B >> K;
        
        int ans = 0;
        while (B > A) {
            if (B % K == 0 && B / K >= A) {
                B /= K;
            } else {
                if (B % K != 0) {
                    ll steps = B % K;
                    B -= steps;
                    ans += steps;
                } else {
                    B--;
                }
            }
            ans++;
        }
        ans += A - B;
        cout << ans << endl;
    }

    return 0;
}
