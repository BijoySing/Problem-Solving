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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 1; i * i <= n; i++)
        {
            // ck(i );
            if (n % i == 0)
            {
                v.pb(i);
                if (i != n / i)
                {
                    v.pb(n / i);
                }
            }
        }
        // yes;
        sort(v.begin(), v.end());
        if (v.size() < k)
        {
            pp(-1);
        }
        else
        {
            pp(v[k - 1]);
        }
    }
}
