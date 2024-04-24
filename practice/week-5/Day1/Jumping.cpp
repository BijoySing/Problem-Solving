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

    int t;
    cin >> t;
    while (t--)
    {
        int i, j, k, n, l, best, cnt;
        vector<int> ans;
        char c;
        string s; 
        cin >> s;
        n = s.size();
        c = s[0];
        ans.clear();
        best = abs(s[n - 1] - s[0]);
        cnt = 0;
        while (1)
        {
            for (i = 0; i < n; i++)
            {
                if (s[i] == c)
                {
                    ans.push_back(i);
                }
            }
            if (c == s[n - 1])
                break;
            if (c < s[n - 1])
                c++;
            else
                c--;
        }
        cout << best << " " << ans.size() << endl;
        for (i = 0; i < ans.size(); i++)
            cout << ans[i] + 1 << " ";
        cout << endl;
    }
    return 0;
}
