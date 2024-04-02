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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }

        sort(a, a + n);
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[n - 1] == v[i])
                break;
        }
        v.push_back(0);
        if (v[i + 1] == a[0])
            cout << a[n - 1] - a[1] << endl;
        else
            cout << a[n - 1] - a[0] << endl;
    }
}
