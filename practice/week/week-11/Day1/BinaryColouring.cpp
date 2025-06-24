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

void dectobin(int n)
{
    string s = "";
    vector<int> v;
    int u = 0;
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            if (n % 4 == 1)
            {
                v.push_back(1);
                n -= 1;
            }
            else
            {
                v.push_back(-1);
                n++;
            }
        }
        else
        {
            v.push_back(0);
        }
        n = n / 2;
        u++;
    }
    cout << u << endl;
    for (auto u : v)
        cout << u << " ";
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        dectobin(n);
    }
}
