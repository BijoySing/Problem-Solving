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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int id = 1;
        int diff = a[1] - a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < diff)
            {
                diff = a[i] - a[i - 1];
                id = i;
            }
        }
        cout << a[id - 1] << " ";
        for (int i = id + 1; i < n + id-1; i++)
        {
            cout << a[i % n] << " ";
        }
        cout << a[id];
        cout << endl;
    }
    return 0;
}