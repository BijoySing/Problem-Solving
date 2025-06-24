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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int coin_a = a * n;
        int d;
        if (coin_a < s)
        {
            d = s - coin_a;
        }
        else
        {
            int x = s / n;
            d = s - (x * n);
        }
        if (b == s || d <= b)
            yes;
        else
            no;
    }
}
