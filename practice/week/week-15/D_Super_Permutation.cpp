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
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n % 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> v;
        for (int i = 0; i < n / 2; i++)
        {
            v.push_back(i);
            v.push_back(n - i - 1);
        }
        ll c = 0;
        cout << n << " ";

        for (int i = 0; i < n - 1; i++)
        {
            c += i;
            cout << (v[i + 1] - v[i] + n) % n << " ";
        }

        cout << endl;
    }
    return 0;
}