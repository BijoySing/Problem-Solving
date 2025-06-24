#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
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

    int t = 1, cas = 1;
    int n, k;
    cin >> t;
    while (t--)
    {
        int n, i, j, k, ans = 0, zero = 0, one = 0;
        string s;
        cin >> n >> s;
        for (i = 0; i < n;)
        {
            j = i;
            while (j < n && s[j] == s[i])
            {
                j++;
            }
            if (s[i] == '0')
                zero++;
            else
                one++;
            i = j;
        }
        cout << min(one, zero) << endl;
    }
}
