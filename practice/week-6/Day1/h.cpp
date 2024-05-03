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
        int n, a, b;
        cin >> n >> a >> b;
        int ans = INT_MAX;
        for (int i = 1; i < a; i++)
        {
            int x = ceil(a / i);
            int y = ceil(b / (n - i));
            x = min(x, y);
            ans = min(ans, x);
        }
        cout << ans << endl;

    }

}
