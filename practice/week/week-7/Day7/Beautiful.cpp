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
        vector<int> a(n), v;
        bool f = 1;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            if (v.size() == 0)
            {
                v.push_back(a[i]);
                cout << 1;
            }
            else
            {
                if (f)
                {
                    if (a[i] >= v.back())
                    {
                        v.push_back(a[i]);
                        cout << 1;
                    }
                    else if (a[i] <= v.front())
                    {
                        v.push_back(a[i]);
                        cout << 1;
                        f = 0;
                    }
                    else
                    {
                        // v.push_back(a[i]);
                        cout << 0;
                    }
                }
                else
                {
                    if (a[i] >= v.back() and a[i] <= v.front())
                    {
                        v.push_back(a[i]);
                        cout << 1;
                    }
                    else
                    {
                        // v.push_back(a[i]);
                        cout << 0;
                    }
                }
            }
        }
        cout << endl;
    }
}
