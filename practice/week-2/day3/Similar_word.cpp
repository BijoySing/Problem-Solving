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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        vector<int> cost;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        int d = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string s = v[i], ts = v[j];
                d = 0;

                for (int k = 0; k < m; k++)
                {
                    int x = s[k], y = ts[k];
                    // cout<<x<<" "<<y<<endl;
                    d += abs(x - y);
                }
                cost.pb(d);
            }
        }
        sort(cost.begin(), cost.end());
        cout << cost[0] << endl;
    }
}
