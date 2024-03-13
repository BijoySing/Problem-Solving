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
    while (t--)
    {
        int n,x;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            int k = i;
            //  for(int k=1;k<=n;k++)
            {
                if (k % 3 == 0)
                {
                    cout << 0;
                }
                else if (k % 3 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 2;
                }
            }
            for (int j = 2 * n - i - 1; j > i; j--)
            {
                cout << " ";
            }
            if (i != n)
            {
                if (k % 3 == 0)
                {
                    cout << 0;
                }
                else if (k % 3 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 2;
                }
            }

            cout << endl;
        }
int ba=n%3 +1;
        for (int i = 2; i <= n; i++)
        {
            /* code */
            for (int j = n; j > i; j--)
            {
                cout << " ";
            }
            int k = ba++;
            //  for(int k=1;k<=n;k++)
            {
                if (k % 3 == 0)
                {
                    cout << 0;
                }
                else if (k % 3 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 2;
                }
            }
            for (int j = 0; j < 2 * i - 3; j++)
            {
                cout << " ";
            }
            //  for(int k=1;k<=n;k++)
            {
                if (k % 3 == 0)
                {
                    cout << 0;
                }
                else if (k % 3 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 2;
                }
            }
            cout << endl;
        }
    }
}