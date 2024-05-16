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

bool check(int n)
{
    int c = 0;
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
        return true;
    else
        return false;
}
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
        int sq = sqrt(n);
        if (n == 4)
            yes;
        else if (sq * sq == n)
        {
            if (check(sq))
                yes;
            else
                no;
        }
        else
        {
            no;
        }
    }
}
