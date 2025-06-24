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
        int b = n * (n - 1);
        b /= 2;
        int a[b];
        set<int> s;
        map<int, int> mp;
        for (int i = 0; i < b; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
        sort(a, a + b);
        // for (auto u : s)
        // cout << u << " ";
        int c = 0;
        // cout<<a[0]<<" ";
        for (int i = 0; i <n-1; i++)
        {
            // ck(c);
            cout << a[c] << " ";
            c+=n-i-1;
        }

        cout << a[b-1] << " ";

        cout << endl;
    }
}
