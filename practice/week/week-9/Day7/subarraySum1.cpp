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

        int n, x;
        cin >> n >> x;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort(a, a + n);
        int l = 0, r = 0, sum = 0, ans = 0;
        while (r < n)
        {
            sum += a[r];
            // ck(sum);
            while (sum > x)
            {
                sum -= a[l];
                l++;
            }
            if (sum == x)
            {
                ans++;
            }
            r++;
        }
        pp(ans);


    }
}
