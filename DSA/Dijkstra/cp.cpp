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
    // cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        int c=0;
        for (int k = 0; k <= l; k++)
        {
            for (int i = 0; i < 10; i++)
            {
                // Your code here
                for (int j = 0; j < 10; j++)
                {
                    int ans = k * pow(a, i) * pow(b, j);
                    if (ans > l)
                        break;
                    if (ans == l and i!=j)
                    {
                        cout << k << " * " << a << "^" << i << " * " << b << "^" << j << " = " << l << endl;
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }
}