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
#define all(x) x.begin(), x.end()
#define ff first
#define ss second

bool is_sorted(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            int j = 1;
            for (;j < n; j++)
            {
                if (a[i + j] < a[i + j - 1])
                    break;
            }
            if (j == n)
            {
                ok = true;
                break;
            }
        }
        puts(ok ? "YES" : "NO");
    }
    return 0;
}
