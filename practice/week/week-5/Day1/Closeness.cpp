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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout<<a[i]%k<<" ";
        }
        sort(a, a + n);
        int x = a[n - 1];
        // x = x / k;
        for (int i = 0; i < n; i++)
        {
            int d = x - a[i];
            d /= k;
            a[i] += (d * k);
            if (abs(x - a[i]) > abs((a[i] + k) - x))
                a[i] += k;
            cout << a[i] << " ";
            x=max(x,a[i]);
        }
        sort(a, a + n);

        cout <<a[n-1]-a[0]<< endl;
    }
}
