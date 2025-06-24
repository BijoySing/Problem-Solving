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

int32_t main()g
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 2];
        int b[n + 2];
        int s = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i];
            b[i] = s;
        }
        while (q--)
        {
            int l, r, k, x = 1;
            int sum = s;
            cin >> l >> r >> k;
            // cout << b[r] << " " << b[x] << endl;
            int d = b[r] - b[l-1];

            if (l == 1)
                d = b[r];

            sum += (r - l + 1) * k;
            sum -= d;
            if (sum % 2)
                yes;
            else
                no;
        }
    }
}
