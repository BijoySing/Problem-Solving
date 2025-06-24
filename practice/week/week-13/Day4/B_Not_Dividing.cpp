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
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int x = a[0];
        if(x==1)a[0]=2;
        for (int i = 1; i < n; i++)
        {
            if(a[i]==1)a[i]=2;
            if (a[i] % a[i - 1] == 0)
            {
                a[i] = a[i] + 1;
            }

        }
        for(int i = 0; i < n; i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}