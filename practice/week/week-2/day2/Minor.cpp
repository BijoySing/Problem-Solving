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
    // cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
                c++;
        }
        cout << c << endl;
    }
}
