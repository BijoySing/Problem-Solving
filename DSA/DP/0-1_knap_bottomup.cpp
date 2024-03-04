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
const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];

int32_t main()
{
    int t;
    while (t--)
    {
        /* code */

        cin >> t;
        int n;
        int W;

        cin >> n >> W;
        int weight[n], value[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                dp[i][j] = -1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (weight[i - 1] <= j)
                {
                    int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                    int op2 = dp[i - 1][j];
                    dp[i][j] = max(op1, op2);
                }
                else
                {
                    int op2 = dp[i - 1][j];
                    dp[i][j] = op2;
                }
            }
        }
        cout << dp[n][W] << endl;
    }
    return 0;
}