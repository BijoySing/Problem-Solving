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
        int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        while (1)
        {
            if (b % k == 0 and b / k >= a)
            {
                ans++;
                b /= k;
            }
            else if (b % k == 0)
            {
                ans += b - a;
                break;
            }
            else
            {
                ans = ans + b % k;
                b -= b % k;
            }
        }
        pp(ans);
    }
}
