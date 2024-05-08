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

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> v;
        // int z=INT_MAX;

        int x = 1;
        int mod = 1e9 + 7;
        int s = 0;
        for (int i = 0; i < 31; i++)
        {
            if (k >> i & 1)
                s = (s + x) % mod;
            x = x * n % mod;
            // cout << x<< " ";
        }
        cout<<s<<endl;
    }
}
