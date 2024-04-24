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
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int h = 0, s = 0;
        int mx=0,mn=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= l and a[i] <= r)
                h++;
            else
                h--;
            if (h > mx)
                mx = h;
            if (h < mn)
                mn = h;
        }
        cout << mx<< " " << mn << endl;
    }
}
