#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
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
        string s;
        cin >> s;
        int cnt = 0, dnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
            {
                cnt++;
            }
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
            {
                cnt++;
            }
        }
        for (int i = 0; i < (n - 4); i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e')
            {
                dnt++;
            }
        }
        cout << cnt - dnt << endl;
    }
}
