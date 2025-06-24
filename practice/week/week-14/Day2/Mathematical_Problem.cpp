#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define output(x) cout << x << endl
#define print(x) cout << #x << " = " << x << endl
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi acos(-1)
const int N = 1150, K = 15;

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1, cas = 1;
    cin >> t;
    while (t--)
    {
        int n, i, j, k, ans = 0, zero = 0, pos = 0, mi = 1000;
        string s;
        cin >> n >> s;
        if (n == 2)
        {
            ans = stoi(s);
            cout << ans << endl;
            continue;
        }
        for (i = 0; i < n; i++)
        {
            j = s[i] - '0';
            if (!j)
            {
                zero = 1;
            }
            if (i)
            {
                string ss = s.substr(i - 1, 2);
                int nm = stoi(ss);
                if (nm < mi)
                    mi = nm, pos = i - 1;
            }
        }
        if (n > 3 and zero)
        {
            cout << 0 << endl;
            continue;
        }

        int anss = 1e5;
        for (pos = 0; pos < n - 1; pos++)
        {
            mi = stoi(s.substr(pos, 2));
            ans = s[0] - '0';
            i = 1;
            if (pos == 0)
                ans = mi, i = 2;
                
            for (; i < n; i++)
            {
                if (pos == i)
                {
                    ans = min(ans + mi, ans * mi);
                    i++;
                }
                else
                {
                    j = s[i] - '0';
                    ans = min(ans * j, ans + j);
                }
            }
            anss = min(ans, anss);
        }

        cout << anss << endl;
    }
}