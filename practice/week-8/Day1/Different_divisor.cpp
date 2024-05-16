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
bool sive[1000001];
vector<int> prime;
void sieve()
{
        memset(sive, true, sizeof(sive));

    for (int i = 2; i <= 100000; i++)
    {
        if (sive[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                sive[j] = false;
            }
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
sieve();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, d;
        cin >> d;
        a = 1 + d;

        while (!sive[a])
        {
            a++;
        }
        b = a + d;
        while (!sive[b])
        {
            b++;
        }
        cout << a * b << endl;
    }
}
