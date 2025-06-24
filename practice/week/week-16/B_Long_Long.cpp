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
        vector<int> a(n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += abs(a[i]);
        }
        int c = 0;
        int ans = 0;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
        
        
                if(a[i]<0)
                {
                    f=1;
                }
                else if(f && a[i]>0)
                {
                    c++;
                    f=0;
                }
        }
        if (f)
        {
            c++;
        }
        cout << s << " "<<c<<endl;
    }
    return 0;
}