#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int med = 0;
        int x = n / 2 + 1;
        // ck(x);
        // ck(a.size());
        int y = k * n;
        int l = 0;
        vector<vector<int>> subarr;
        for (int i = 0; i < y;)
        {

            // cout<<i<<" ";
            vector<int> v;
            for (int j = 0; j < x; j++)
            {
                v.push_back(a[i]);
                // cout<<a[i]<<" ";
                i++;
            }
            for (int j = 0; j < n - x; j++)
            {
                // cout<<a[y]<<" ";
                // cout<<"#"<<" ";
                v.push_back(a[y - 1]);
                l++;
                y--;
            }
            // cout<<endl;
            subarr.pb(v);
            // v.clear();
        }
        for (auto u : subarr)
        {
            med += u[x - 1];
        }
        cout << med << endl;
        // cout << "------------------" << endl;
    }
}
