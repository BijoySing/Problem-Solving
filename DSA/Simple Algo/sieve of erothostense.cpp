#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
// #define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, q;
                unordered_map<int, int> mp;

        cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x] = i + 1;
        }
        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            // cout<<mp[x]<<endl;
            if (mp[x] >= l and mp[x] <= r)
                yes;
            else
                no;
        }
    }
}
