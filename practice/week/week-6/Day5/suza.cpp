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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        vector<long long> pre(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pre[i + 1] = pre[i] + a[i];
        }

        for (int i = 1; i < n; i++)
        {
            a[i] = max(a[i - 1], a[i]);
        }

        while (q--)
        {
            int x;
            cin >> x;

            int low = -1;
            int high = n;

            while (high - low > 1)
            {
                int mid = (low + high) / 2;
                if (a[mid] > x)
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            cout << pre[high] << ' ';
        }
        cout << '\n';
    }
}
