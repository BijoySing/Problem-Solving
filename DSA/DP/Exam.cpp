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
int dp[1005][1005];
bool xm(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = xm((n - 1), a, s - a[n - 1]);
        bool op2 = xm((n - 1), a, s);
        return dp[n][s] = (op1 || op2);
    }
    else
    {
        return dp[n][s] = xm((n - 1), a, s);
    }
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int w[n];
        vector<int> v, x, y;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            v.push_back(w[i]);
            sum += w[i];
        }
        memset(dp, -1, sizeof(dp));

        sort(w, w + n);

        if ( xm(n, w, 1000-m))
        {
            yes;
        }
        else
        {
            no;
        }
    }
}
