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
        string s, ss, x = "meow";
        cin >> s;
        int f = 0, i;
        set<char> st;
        vector<int> v;

        for (char &c : s)
        {
            c = tolower(c);
            st.insert(c);
        }
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                v.pb(s[i]);
                ss += s[i];
            }
        }
        if (i != n)
            ss += s[i];
        if (ss == x)
            yes;
        else
            no;
    }
}
