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
        int x;
        cin >> x;
        int md = log2(x);
        int b, a = pow(2, md);
        int ans = x - a;
        bool f = ceil(log2(x)) == floor(log2(x));
        if (x % 2 || f)
            cout << 1 << endl;
        else
            cout << ans << endl;
    }
}
