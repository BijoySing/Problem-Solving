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
        string s;
        cin >> n >> s;
        int o = 0, c = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                c++;
                if (o < c)
                {
                    ans++;
                    c--;
                }
            }
            else
            {
                o++;
            }
        }
        cout << ans << endl;
    }
}
