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
ll dp[maxN][maxW];
bool make(int cur, int n)
{
    // ck(cur);
    if (cur == n)
        return true;
    if (cur > n)
        return false;
    cur = make(2 * cur, n);
    cur = make(3 + cur, n);
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;
        if (make(1, n))
            yes;
        else
            no;
    }
}