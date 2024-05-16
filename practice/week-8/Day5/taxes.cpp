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

bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int ans = 1;
        if (isprime(n))
        {
            pp(1);
            continue;
        }
        else if (n % 2 == 0)
        {
            pp(2);
            continue;
        }
        else if (isprime(n - 2))
        {
            pp(2);
            continue;
        }
        else
        {
            pp(3);
        }
    }
}
