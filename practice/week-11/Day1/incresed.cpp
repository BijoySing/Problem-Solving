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
        int arr[n];
        int b[n + 1];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        for (int i = 0; i <= n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        int last = b[n];
        int f = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = abs(b[i] - arr[i]);
            ans += diff;
        }
        vector<int> v;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int mina = min(arr[i], b[i]);
            int maxa = max(arr[i], b[i]);
            if (mina <= last and last <= maxa)
            {
                mn = 1;
                break;
            }
            mn = min({mn, abs(last - arr[i]) + 1, abs(last - b[i]) + 1});
        }

        ans += mn;
        cout << ans << endl;
    }
}
