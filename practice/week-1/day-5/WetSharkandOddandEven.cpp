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
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mn = INT_MAX;
        int s = 0, ss = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                mn = min(a[i], mn);
                c++;
                ss += a[i];
            }
            else
            {
                s += a[i];
            }
        }
        if (c % 2)
        {
            cout << s + ss - mn << endl;
        }
        else
            cout << s + ss << endl;
    }
}
