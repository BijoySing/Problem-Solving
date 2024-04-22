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
        int n, f = 0, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x;
        while (m--)
        {
            cin >> x;

            int l = 0, f = 0, c = 0,
                r = n - 1;
            while (l <= r)
            {
                int mid = (l + r) / 2;

                if (a[mid] >= x)
                {
                    f = 1;
                    c=mid;
                    r = mid -1;
                }
               
                else
                {
                    l = mid + 1;
                }
            }
            if (f)
                cout << c+1 << endl;
            else
                cout << n+1 << endl;
        }
    }
}
