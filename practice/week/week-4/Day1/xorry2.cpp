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
        int x;
        cin >> x;
        int b = __lg(x);
        int c = 0;
        bitset<16> s(x);
        for (int i = 0; i < 16; i++)
        {
            // ck(s[i]);
            // cout<<s[i];
            if (s[i] == 1)
                c++;
        }

        cout << (pow(2, c - 1)) << endl;
    }
}
