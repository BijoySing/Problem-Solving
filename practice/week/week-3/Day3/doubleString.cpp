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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        set<string> s;
        int n;
        cin >> n;
        string str;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            s.insert(str);
            v.pb(str);
        }
        for (int i = 0; i < n; i++)
        {
            string x = v[i];
            int f = 0;
            for (int j = 0; j < x.size(); j++)
            {
                string a = x.substr(0, j);
                string b = x.substr(j, 8);
                // ck(a);
                // ck(b);
                if (s.count(a) && s.count(b))
                {
                    f = 1;
                    break;
                }
            }
            cout<<f;
        }
        cout<<endl;
    }
}