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
const int N = 1e5 + 5;

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
        char ch = 'a';
        int ans = 0;
        set<char> ss;
        for (int i = 0; i < s.size(); i++)
        {
            ss.insert(s[i]);
        }
        for (auto u : ss)
        {
            if (u != ch)
            {
                ans = 1;
                break;
            }
            ch += 1;
        }
        ans ? cout << ch << endl : cout << "None\n"; 
    }
}
