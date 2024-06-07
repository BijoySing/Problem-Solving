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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0;
        vector<int> v;

        // sort(v.begin(), v.end());
        for (int i = 1; i <= n; i++)
        {

            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '0')
                {
                    // cout << i + 1 << " ";
                    sum += i;
                    s[j - 1] = '2';
                }
                if (s[j-1] == '1')
                    break;
            }
        }
        cout
            << sum << endl;
    }
}
