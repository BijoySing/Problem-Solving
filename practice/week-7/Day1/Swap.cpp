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
        string s;
        cin >> s;
        int n = s.size();
        int s0 = 0, tc = 0;
        int s1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                s0++;
            else
                s1++;
        }
        int t0 = 0, t1 = 0;
        int ans = 0;

        for (int i = 0; i <n; i++)
        {
            if (s[i] == '0')
                t1++;
            else
                t0++;
            if (t0 <= s0 and t1 <= s1)
                ans = i+1;
        }
        cout << n - ans << endl;
    }
}
