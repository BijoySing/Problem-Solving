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
        int a, b;
        cin >> a >> b;
        int gcd = __gcd(a, b);
        int lcm = (a * b) / gcd;
        if (b== 1)
        {
            no;
            // cout << lcm + lcm << " " << a << " " << a + a + a << endl;
        }
        else
        {
            yes;

            cout << a << " " << a * b << " " << a * b + a << endl;
        }
    }
}
