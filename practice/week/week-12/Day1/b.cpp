#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

int sumofdigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
        sum = sum % 1000000007;
    }
    return sum % 1000000007;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int ans = 0;
        if (k > 4)
        {
            ans = (1 << (r)) - 1;
            ans -= (1 << (l)) - 1;
            pp(ans);
        }
        else
        {
            l = (pow(10, l));
            l %= 1000000007;
            r = (pow(10, r));
            r %= 1000000007;
            int ans = 0;
            for (int i = l; i < r; i++)
            {

                int z = i % 1000000007;
                z = z * k;
                z = z % 1000000007;
                int x = sumofdigits(z);
                z/=k;
                int y = sumofdigits(z) * k % 1000000007;
                if (x == y)
                {
                    ans++;
                    // cout << i << " " << x << " " << y << endl;
                }
            }
            pp(ans);
        }
        // pp(ans);
        // cout << "----------------\n"    ;
    }
}
