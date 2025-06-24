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
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
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
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int val = 1;
        vector<int> v[n + 2];
        // v.push_back(1);
        vector<int> v2[n + 2];
        // v2.push_back(1);
        if (check(m))
        {
            // yes;
            int odd = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i % 2 == 0)
                    {
                        v[i].push_back(odd);
                        v2[i].push_back(0);
                    }
                    else
                    {
                        v2[i].push_back(odd);
                        v[i].push_back(0);
                    }
                    odd++;
                }
                // cout << endl;
            }
            if (n % 2 == 0)
            {
                for (int i = n - 2; i >= 0; i -= 2)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << v[i][j] << " ";
                    }
                    cout << endl;
                }
                for (int i = n - 1; i >= 0; i -= 2)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << v2[i][j] << " ";
                    }
                    cout << endl;
                }
                // cout << endl;
            }
            else
            {
                for (int i = n - 1; i >= 0; i -= 2)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << v[i][j] << " ";
                    }
                    cout << endl;
                }
                for (int i = n - 2; i >= 0; i -= 2)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << v2[i][j] << " ";
                    }
                    cout << endl;
                }
                // cout << endl;
            }
        }
        else
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << val++ << " ";
                }
                cout << endl;
            }
        cout << endl;
    }
}