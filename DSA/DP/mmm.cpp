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

int32_t main()
{
    int t = 1;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    map<int, int> mp;
    priority_queue<pair<int, int>> pq;
    while (t--)
    {
        int x;
        cin >> x;
        int pre;
        if (x == 1)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        if (x == 2)
        {

            if (mp.empty())
                cout << "empty\n";
            else
            {
                for (auto u : mp)
                {
                    pq.push({u.second, u.first});
                }
                auto ans = pq.top();
                mp.erase(ans.second);
                pq.pop();
                cout << ans.second << "\n";
            }
        }
    }
}
