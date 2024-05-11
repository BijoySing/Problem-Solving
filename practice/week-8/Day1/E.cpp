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
bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = x / sqrt(x);
        int b = x / a;
        if (isprime(x) || x == 1)
        {
            cout << 1 << " " << x << endl;
        }
        else
        {
            // yes;
            int lcm = (a * b) / __gcd(a, b);
            int ans = 1;
            if (lcm == x)
            {
                cout << a << " " << b << endl;
            }
            else
            {
                // ck(a);
                for (int i = 1; i * i <= x; i++)
                {

                    if (x % i == 0)
                    {

                        int lcm = (i * (x / i)) / __gcd(i, x / i);
                        if (lcm == x)
                        {
                            ans = i;
                            // cout << i << " " << x / i << endl;
                            // return  0;
                        }
                    }
                }

                cout << ans << " " << x / ans << endl;
            }
            // yes;
        }
    }
}