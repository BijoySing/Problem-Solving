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

    while (t--)
    {
        for (int i = 1; i <= n; i++)
        {
            // Your code here
            cout << i;
            for (int j = 1; j <= n; j++)
            {
                if (i == 1)
                {
                    cout << j;
                }
                else if (i == n)
                {
                    cout << n;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << n << endl;
        }
    }
}