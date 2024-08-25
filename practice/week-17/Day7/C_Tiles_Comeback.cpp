#include <bits/stdc++.h>
using namespace std;
// typedef long long int;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(kharrtarrm) cout << kharrtarrm << endl
#define int long long
#define pb(kharrtarrm) push_back(kharrtarrm);
#define ck(kharrtarrm) cerr << #kharrtarrm << " = " << kharrtarrm << endl;
#define pi acos(-1.0)

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, k, h, h1;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = a[0], y = a[n - 1];
        int o = 0, v, b = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                o++;
            }
            if (o == k)
            {
                p = i;
                break;
            }
        }
        for (int i = p; i < n; i++)
        {
            if (y == a[i])
            {
                b++;
            }
        }
        if (x == y && (o >= k || b >= k))
            yes;
        else if (o >= k && b >= k)
            yes;
        else
            no;
    }
}