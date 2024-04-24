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
        string s, ans = "";
        cin >> n >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int d1 = s[i - 1] - 48;
                int d2 = s[i - 2] - 48;
                int d = d2 * 10 + d1;
                // ck(d1);
                // ck(d2);
                char c = 'a' + d-1;
                i -= 2;
                ans +=c;
                // ck(c);
            }
            else
            {
                int d = s[i] - 49;
                char c = 'a' + d;
                ans += c;
                // ck(c);
            }
        }
        reverse(ans.begin(),ans.end());
                    // ck(ans);
                    cout<<ans<<endl;

    }
}
