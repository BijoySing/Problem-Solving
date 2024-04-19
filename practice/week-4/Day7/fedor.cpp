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
    // cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[m + 1];
        for (int i = 0; i <= m; i++)
        {
            cin >> a[i];
        }
        vector<string> v;
        for (int i = 0; i <= m; i++)
        {
            string s;
            for (int j = 0; j < n; j++)
            {
                if ((a[i] >> j) & 1)
                {
                    // cout << 1;
                    s += '1';
                }
                else
                {
                    // cout << 0;
                    s += '0';
                }
            }
            // reverse(s.begin(), s.end());
            v.push_back(s);
            // cout << s << endl;
        }
        string fador = v[m];
        // ck(fador);
        int ans=0;
        for (int i = 0; i < m; i++)
        {
            string s = v[i];
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] != fador[j])
                    c++;
            }
            if(c<=k)ans++;
        }
        cout<<ans<<endl;
    }
}
