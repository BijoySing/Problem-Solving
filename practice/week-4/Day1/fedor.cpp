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
        int n, m, k;
        cin >> n >> m >> k;
        int a[m + 1];
        for (int i = 0; i <= m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <m; i++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((i >> k) & 1)
                {
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}
