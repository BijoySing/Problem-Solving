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
        int n;
        cin >> n;
        int a[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                s += a[i];
            else
                s += (-1) * a[i];
        }
        int c = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            // ck(c);
            if (a[i] < 0)
                c++;
            else
            {
                if (c and a[i] != 0)
                {
                    v.pb(c);
                    c = 0;
                }
            }
        }
        if (c)
            v.pb(c);

        cout << s << " " << v.size() << endl;
    }
}
