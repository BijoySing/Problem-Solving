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
int rec(int n)
{
    // cout << n<< " ";

    if (n == 1)
        return 1;

    else
    {
        // cout<<n<<" ";
        return n* rec(n - 1);
    }
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        cout << rec(5) << " ";
    }
}