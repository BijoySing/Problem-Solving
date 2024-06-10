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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<pair<int, int>> edges;
        int ok = -1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                ok = i;
                break;
            }
        }

        if (ok == -1)
        {
            no;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                edges.push_back({1, i + 1});
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                edges.push_back({ok + 1, i + 1});
            }
        }

        yes;
        for (auto edge : edges)
        {
            cout << edge.first << " " << edge.second << endl;
        }
    }

    return 0;
}
