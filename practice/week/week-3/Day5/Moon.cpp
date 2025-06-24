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

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n, greater<int>());
        sort(b, b + m, greater<int>());
        int ans = 0;
        
        for (int i = 0; i <min(n, m); i++)
        {
                 ans+=min(a[i],b[i]*h);

        }
        cout << ans << endl;
    }
}
