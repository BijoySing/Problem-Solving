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
        int n, q;
        cin >> n >> q;
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }
        int b = temp[0];
        while (q--)
        {
            int task;
            cin >> task;
            // ck(a[0]);
            if (task == 1)
                cout << b << " ";
            else
            {
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    a[i] = temp[i];
                }
                sort(a, a + task, greater<int>());
                int s = 0;
                for (int i = 0; i < task / 2 + 1; i++)
                {
                    s += a[i];
                    // ck(a[i]);
                }
                int x = task / 2;
                // ck(s);
                // sort(a, a + task);
                for (int i = x + 1; i < task; i++)
                {
                    s -= a[i];
                }
                cout << s << " ";
            }
        }
        cout << endl;
    }
}