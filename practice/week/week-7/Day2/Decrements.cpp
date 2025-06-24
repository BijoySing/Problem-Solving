
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define ck(x) cout << #x << " = " << x << endl;
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        vector<int> v;
        set<int> ss, sb;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] - b[i];
            if (a[i] < b[i])
            {
                p = 1;
                break;
            }
            ss.insert(x);
            sb.insert(b[i]);
            v.push_back(x);
        }
        if (p)
            no;
        else
        {
            sort(v.rbegin(), v.rend());
            if (ss.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                int mx = v[0], z, c = 0, q = 1;
                for (int i = 0; i < n; i++)
                {
                    z = (a[i] - mx);
                    if (z == b[i] || (z < 0 && b[i] == 0))
                    {
                        c++;
                    }
                    else
                    {
                        q = 0;
                        break;
                    }
                }
                if (q)
                    yes;
                else
                    no;
            }
        }
    }
}