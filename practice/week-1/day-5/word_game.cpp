#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
const int N = 1e5 + 5;

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
        map<string, int> mp;
        string a[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                mp[a[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int point = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == 1)
                {
                    point += 3;
                }
                else if (mp[a[i][j]] == 2)
                {
                    point++;
                }
            }
            cout << point << ' ';
        }
        cout << endl;
    }
}