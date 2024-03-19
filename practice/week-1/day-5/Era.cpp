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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort(a, a + n);
        mx = a[n - 1];
        int ans = 0, c = 1;
        for (int i = 1; i <= n; i++)
        {
           
            if (c < a[i - 1])
            {
                // cout<<c<<" "<<a[i-1]<<endl;
                ans += (a[i - 1] - c);
                c=a[i-1]+1;
            }
            else
            {
                c++;
            }
            //  ck(c);
            // ck(ans);
        }
        cout << ans << endl;
    }
}
