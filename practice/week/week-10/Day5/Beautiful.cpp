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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        map<pair<int, int>, int> ab, bc, ca;
        map<vector<int>, int> abc, bca, cab;
        for (int i = 0; i < n - 2; i++)
        {

            int a = arr[i];
            int b = arr[i + 1];
            int c = arr[i + 2];
            ab[{a, b}]++;
            bc[{b, c}]++;
            ca[{c, a}]++;
            abc[{a, b, c}]++;
        }
        for (auto [x, y] : ab)
            ans += y * (y - 1) / 2;
        for (auto [x, y] : bc)
            ans += y * (y - 1) / 2;
        for (auto [x, y] : ca)
            ans += y * (y - 1) / 2;
        for (auto [x, y] : abc)
            ans -= y * (y - 1) / 2 * 3;
        cout << ans << endl;
    }
}
