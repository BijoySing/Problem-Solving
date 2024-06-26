#include <iostream>
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
#define ck(x) cout << #x << " = " << x << endl

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

        int ans = INT_MAX;
        string s1 = to_string(n);

        for (int i = 0; i < 60; i++)
        {
            int x = (1LL << i);
            string s2 = to_string(x);

            int sz1 = 0, sz2 = 0, c = 0; 
            bool flag = false; 
            while (sz1 < s1.size() && sz2 < s2.size())
            {
                if (s1[sz1] == s2[sz2])
                {
                    sz1++;
                    sz2++;
                    flag = true;
                }
                else
                {
                    sz1++;
                    c++;
                    flag = false;
                }
            }

            if (flag)
            {
                if (sz1 == s1.size())
                {
                    c += s2.size() - sz2; }
                else if (sz2 == s2.size())
                {
                    c += s1.size() - sz1; 
                }
            }
            else
            {
                c += s2.size() - sz2; 
            }

            ans = min(ans, c); 
        }

        cout << ans << endl; 
    }
    return 0;
}
