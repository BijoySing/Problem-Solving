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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
            cin >> a[i],
                mn = min(mn, a[i]);

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mn)
            {
                idx = i;
                break;
            
            }
            
        }
        int f = 0;
        for(int i = idx; i < n-1; i++) {
            if(a[i]>a[i+1]) {
                f=1;
            }
        }
        if(f) {
            cout << -1 << endl;
            // return 0;
        }
        else{
            cout<<idx<<endl;
        }
    }
    // return 0;
}