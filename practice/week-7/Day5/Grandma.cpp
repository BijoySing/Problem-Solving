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
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1;
            int sum = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    sum++;
                    if (s[l] == ch)
                        l++;
                    else if (s[r] == ch)
                        r--;
                    else
                    {
                        sum = INT_MAX;
                        break;
                    }
                }
            }

            ans = min(ans, sum);
        }
        if (ans == INT_MAX)
            ans = -1;
        cout << ans << endl;
    }
}
