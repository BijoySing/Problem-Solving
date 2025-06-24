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

vector<int> decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    string s = "", val = "";
    vector<int> v;
    int idx = 0;
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            // cout << "1";
            s += "1";
            // idx=i;
        }
        else
            s += "0";
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            idx = i;
            break;
        }
    }
    for (int i = idx; i < s.size(); i++)
    {
        val += s[i];
    }
    int sz = val.size();
    int cnt = 0;
    reverse(val.begin(), val.end());
    if (idx)
    {
        for (int i = 0; i < sz; i++)
        {
            // cout<<val[i]<<" ";
            if (val[i] == '0')
            {
                v.pb(i);
            }
        }
    }
    // reverse(s.begin(),s.end());
    // ck(val);
    // ck(s);
    return v;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // int a[n], b[m];
        vector<int> v;
        v = decToBinary(n);
        int sum = 0;
        int ans = n;
        if (n == 0)
        {
            ans = (1 << m) - 1;
        }
        else
        {
            for (auto u : v)
            {
                sum += u;

                // cout<<u<<" ";
                if (sum < m)
                {
                    int x = (1 << (u));
                    // ck(x);
                    ans += x;

                    // ans+=pow(2,u-1);
                }
                else
                    break;
            }
            // ck(ans);
        }
        cout << ans << endl;
    }
}
