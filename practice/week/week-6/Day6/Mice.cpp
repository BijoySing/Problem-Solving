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

bool ok(int mid, int k, int n, int arr[])
{
    int sum = 0;
    for (int i = mid; i < k; i++)
    {
        if (sum >= arr[i])
            return false;
        sum += (n - arr[i]);
    }
    return true;
}

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
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a, a + k);
        // int s = 0, ans = 0;
        int l = 0, r = k-1, mid, ans;

        while (l <= r) 
        {
            mid = l + (r - l) / 2;
            if (ok(mid, k, n, a))
            {
                ans = mid;
                r = mid-1;
            }
            else
                l = mid + 1;
        }

        cout << k - ans << endl;
    }
}
