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
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int c = 0;
        for (auto x : mp)
        {
            if (x.second % 2)
            {
                c++;
            }
        }
        if (c > 1)
        {
            cout << "NO SOLUTION\n";
        }
        else
        {
            string ans = "";
            for (auto x : mp)
            {
                if (x.second % 2 == 0)
                {
                    for (int i = 0; i < x.second / 2; i++)
                    {
                        ans += x.first;
                    }
                }
            }
            string temp = ans;
            reverse(temp.begin(), temp.end());
            for (auto x : mp)
            {
                if (x.second % 2)
                {
                    for (int i = 0; i < x.second; i++)
                    {
                        ans += x.first;
                    }
                }
            }
            ans += temp;
            cout << ans << endl;
        }
    }
}
