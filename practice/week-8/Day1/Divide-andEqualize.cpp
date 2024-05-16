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
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            // cout << a[i] << endl;

            for (int j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    while (a[i] % j == 0)
                    {
                        mp[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1)
            {
                mp[a[i]]++;
            }
        }
        int f = 0;
        for (auto x : mp)
        {
            int p = x.first;
            int q = x.second;
            if (q % n != 0)
            {
                // cout<<p<<" "<<q<<endl;
                f = 1;
            }
        }
        if (f)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
