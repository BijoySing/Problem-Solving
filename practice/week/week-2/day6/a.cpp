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
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        for(auto u:v)cout<<u<<" ";
    }
}
