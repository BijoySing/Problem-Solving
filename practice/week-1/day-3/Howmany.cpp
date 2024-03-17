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
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int s, t;
        cin >> s >> t;
        int c = 0;
        for (int i = 0; i <= s; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                for (int k = 0; k <= s; k++)
                {
                    int a = i + j + k;
                    int b = i * j * k;
                    if (a <= s and b <= t)
                    {
                        c++;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
}