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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << "NO\n";
            continue;
        }
        int c1 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
                c1++;
        }
        ll s = 0;
        for (int i = 1; i <= n; i++)
            s += a[i] - 1;
        if (s >= c1)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}
