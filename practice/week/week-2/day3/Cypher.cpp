#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int q;
            string s;
            cin >> q >> s;
            int ans = a[i];
            for (int i = 0; i < q; i++)
            {

                if (s[i] == 'D')
                {
                    if (ans == 9)
                    {
                        ans = 0;
                        continue;
                    }
                    ans++;
                }
                else
                {
                    if (ans == 0)
                    {
                        ans = 9;
                        continue;
                    }

                    ans--;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}
