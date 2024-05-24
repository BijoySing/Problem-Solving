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
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                ans = x * x - y + 1;
            }
            else
            {
                ans = (x - 1) * (x - 1) + y;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                ans = (y - 1) * (y - 1) + x;
            }
            else
            {
                ans = y * y - x + 1;
            }
        }
        pp(ans);
    }

}
