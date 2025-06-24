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
        int a[n + 2];
        for (int i = 0; i < n - 1; i++)
        {
            // Your code here
            cin >> a[i];
        }
        sort(a, a + n - 1);
        int ans = -1;
        for (int i = 0; i < n - 1; i++)
        {
            // cout<<a[i]<<" ";
            if (i + 1 != a[i])
            {
                ans = i;
                break;
            }
        }
        if (ans!=-1)
            cout << ans + 1 << endl;
        else
            cout << n << endl;
    }
}
