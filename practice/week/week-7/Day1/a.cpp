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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a, c, b;
        a.push_back(-1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                a.push_back(i);
            }
            else if (s[i] == 'c')
            {
                c.push_back(i);
            }
            else if (s[i] == 'b')
            {
                b.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int id_a = a[0];
        int id_b = -1;
        for (int i = id_a; i < n; i++)
        {
            if (s[i] == 'b')
            {
                id_b = i;
                break;
            }
        }
        int id_c = -1;
        for (int i = id_b; i < n; i++)
        {
            if (s[i] == 'c')
            {
                id_c = i;
                break;
            }
        }

        if (id_a != -1 and id_b != -1 and id_c != -1)
        {
            
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
