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
multiset<int> s;
map<int, int> mp;
void prime_dvisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            mp[i]++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            // prime_dvisor(a[i]);
        }
        if (a[0] == 1)
        {
            yes;
        }
        else
        {
            int x = a[0];
            int c = 0;
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % x == 0)
                {
                    c++;
                }
                else
                {
                    x = a[i];
                    c = 0;
                }
                ans = max(ans, c);
            }
            if (ans >= 2)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
}