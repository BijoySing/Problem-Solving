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
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int k, s;
        cin >> k >> s;
        int c = 0;
        for (int i = 0; i <= k; i++)
        {
            if (i > s)
                break;
            for (int j = 0; j <= k; j++)
            {
                if (i + j > s)
                    break;
                int l = s - i - j;
                if (l <= k)
                {
                    if (i + j + l == s)
                        c++;
                    if (i + j + l > s)
                        break;
                }
            }
        }
        cout << c << endl;
    }
}
