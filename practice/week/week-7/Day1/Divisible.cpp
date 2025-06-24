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
        int s = 0;
        vector<int> v;
        for (int i = 2; i <= n; i++)
        {

            // cout << i << " ";
            s += i;
            // v.pb(i);
        }
        int x = s % n;
        x=n-x;
        // int z = x + n;
        s+=x;
        if (x == 0)
        {
            x = n;
        }
        cout << x << " ";
        for (int i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        // cout<<n<<" "<<s;
        cout << endl;
    }
}
