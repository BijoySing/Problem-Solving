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
        string s;
        cin >> s;
        string t = "";
        if (s[0] == '9')
        {
            int carry = 0;
            for (int i = n - 1; i >= 0; i--)
            {

                int d = s[i] - '0' + carry;
                if (d <= 1)
                {
                    t += '0' + 1 + d;
                    carry = 0;
                }
                else
                {
                    carry = 1;
                    t += '0' + 11 - d;
                }
            }
            reverse(t.begin(), t.end());
            cout << t << endl;
        }
        else
            for (int i = 0; i < n; i++)
            {
                int x = s[i] - '0';
                x = 9 - x;
                t += to_string(x);
            }
        cout << t << endl;
    }
}