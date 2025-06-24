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
        map<int, int> mp;
        int c = 0;
        while (n % 2 == 0)
        {
            c++;
            n = n / 2;
        }
        mp[2] = c;

        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                c++;
                n = n / i;
            }
            mp[i] = c;
            c = 0;
        }
cout<<mp.size();
        if (n > 2 || mp.size() > 3 || mp.size() < 3)
            no;
        else
        {
            int f = 0;
            for (auto u : mp)
            {
                if (u.second != 2)
                {
                    f = 1;
                    break;
                }
                cout << u.first << " " << u.second << endl;
            }
            if (f)
                no;
            else
                yes;
        }
    }
}
