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

int a[27];
int b[27]; 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        int c = 0;
        for (int i = 0; i < 27; i++)
        {

            c += a[i];
            if (c > k)
            {
                c -= a[i];
                b[i] = k-c;

                break;
            }

            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (b[s[i] - 'a'] != 0 and k > 0) 
            {
                b[s[i] - 'a']--;
                k--;
            }
            else
            {
                cout << s[i];
            }
        }
    }
}