#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
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

        string s;
        cin >> s;
        int x = s[0] - 48;
        int y = s[1] - 48;
        int a = x * 10 + y;
        // cout << a << endl;
        if (a == 0)
        {
            cout << 12 << s[2] << s[3] << s[4] << " AM" endl;
        }
        else if (a > 12)
        {
            a = a - 12;
            if (a < 10)
            {
                cout << 0 << a << s[2] << s[3] << s[4] << " PM" endl;
            }
            else
            {
                cout << a << s[2] << s[3] << s[4] << " PM" endl;
            }
        }
        else if (a < 12)
        {
            cout << s << " AM" << endl;
        }
        else
        {
            cout << s << " PM" << endl;
        }
    }
}
