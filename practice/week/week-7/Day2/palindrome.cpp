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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[3];
        s[0] = 'b';
        s[1] = 'a';
        s[2] = 'c';
        string ans = "";
        for (int i = 0; i < n / 2; i++)
        {
            ans += s[i % 2];
            ans += s[i % 2];
            // ck(s[i % 2]);
        }
        if (n >= 3 and  (n / 2) % 2 and n%2)
            ans += s[1];
        else if (n % 2)
            ans += s[0];
        cout << ans << endl;
    }
}
