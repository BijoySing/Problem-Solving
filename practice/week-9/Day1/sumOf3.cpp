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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int w, y, z;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j];
                // ck(sum);
                //    ck(s.count(x-sum));
                if (sum != x and s.count(x - sum))
                {
                    w = i;
                    y = j;
                    z = x - sum;
                    f = 1;
                    break;
                }
            }
            if (f)
            {
                break;
            }
        }
        // ck(w);
        // ck(y);
        // ck(z);
        if (f)
        {
            int foo = 0;
            for (int i = 0; i < n; i++)
            {
                // cout << i << " " << a[i] << endl;
                if (a[i] == z && i != w && i != y)
                {
                    z = i + 1;
                    // ck(i);
                    foo = 1;
                    break;
                }
            }
            if (foo == 0)
            {
                cout << "IMPOSSIBLE\n";
            }
            else
            {
                cout << w + 1 << " " << y + 1 << " " << z << endl;
            }
        }
        else
        {
            cout << "IMPOSSIBLE\n";
        }
    }
}
