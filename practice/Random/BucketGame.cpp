#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define Int int

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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int s = 0;
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            // Your code here
            cin >> a[i];
        }
        sort(a, a + n);

        if (o == 1)
            cout << "Alice" << endl;

        else
        {
            int aa = 0, b = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] % 2)
                    aa++;
                else
                {
                    if(a)
                    b++;
                }
            }
        }
    }
}
