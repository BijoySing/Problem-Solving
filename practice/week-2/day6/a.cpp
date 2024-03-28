#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
vector<int> v;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        if (l > 1e6)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << l * (i + 1) << " ";
            }
            cout << endl;
        }
    }
}
