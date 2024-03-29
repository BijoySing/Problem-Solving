#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
vector<int> v;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = 0, ans = 0;
        while (r < m and l < n)
        {
            int cnt1 = 0, cnt2 = 0, curr = a[l];
            while (curr == a[l] and l < n)
            {
                l++;
                cnt1++;
            }
            while (b[r] < curr and r < m)
            {
                r++;
            }
            while (b[r] == curr and r < m)
            {
                cnt2++;
                r++;
            }

            ans += (cnt1 * cnt2);
        }
        cout << ans << " ";
    }
}
