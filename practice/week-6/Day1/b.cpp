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

// #write a fun is two num are multiple of each other
bool isMultiple(int a, int b)
{
    if (a % b == 0)
        return true;
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
        int n, k;
        int m;
        cin >> n >> m;
        // int a[n];
        // int b[m];
        int cnt = 0;
        // cout << endl;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= m; j++)
            {
                int x = i + j;
                int ans = (__gcd(i, j)) * j;
                if (isMultiple(x, ans))
                {
                    cout << i << " " << j << endl;
                    cnt++;
                }
            }
        }

        cout << "  " << cnt << endl;
    }
}