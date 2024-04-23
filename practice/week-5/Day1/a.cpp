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

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int m[n], x[n];
        int ans = 0, f = 0;
        priority_queue<int> pq;
        
        for (int i = 0; i < n; i++)
        {
            cin >> m[i] >> x[i];
            if (x[i] == l)
            {
                f = 1;
                pq.push(m[i]);
            }
        }

        if (f and pq.size() >= k)
        {
            ans = 0;
            
            for (int i = 0; i < k; i++)
            {
                ans += pq.top();
                pq.pop();
            }
            
            pp(ans);
        }
        else
            pp(-1);
    }
}
