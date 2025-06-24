#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

int cuts(int x)
{
    int res = 0;
    while (x > 1)
    {
        x = (x + 1) / 2;
        res++;
    }
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int x = min(a, n - a + 1);
        int y = min(b, m - b + 1);
        int ans = min(cuts(n) + cuts(y), cuts(m) + cuts(x)) + 1;
        cout << ans << endl;
        
    }
}
