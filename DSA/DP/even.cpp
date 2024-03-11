#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5 + 5;
int32_t main()
{
    int t = 1;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> t;
    while (t--)
    {
        int n, i, j, k, l, m, o, p;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            // Your code here
            for (j = i +2; j <= n; j++)
            {
                cout << " ";
            }
            for (k = i + 1; k <= n; k++)
            {
                cout << "*";
            }
            for (l = 1; l <= (i) * (4); l++)
            {
                cout << " ";
            }

            for (j = i + 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 2; i <= n; i++)
        {
            int x = 2;

            for (l = 2; l <= i; l++)
            {
                cout << " ";
            }

            for (j = 1; j <= i; j++)
            {
                cout << "*";
            }

            for (l = 1; l <= 4 * (n - i); l++)
            {
                cout << " ";
            }

            for (j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
    }
}