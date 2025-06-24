#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even.pb(i + 1);
            else
                odd.pb(i + 1);
        }
        if (odd.size() == 0 || (odd.size() == 2 and even.size() == 1))
        {
            no;
        }
        else
        {
             if (odd.size() >= 3)
            {
                yes;
                for (int i = 0; i < 3; i++)
                {
                    cout << odd[i] << " ";
                }
            }
            else
            {
                yes;
                cout << odd[0] << " ";
                cout << even[1] << " ";
                cout << even[0] << " ";
            }
            cout << endl;
        }
    }
}