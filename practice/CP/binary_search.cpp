#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int a[6] = {1, 2, 3, 4, 5, 6};
        int l = 0, r = 6;
        int x;
        cin >> x;
        while (l < r)
        {
            int m = (l + r) / 2;
            if (a[m] == x)
            {
                cout << "index " << m << endl;
                return 0;
            }
            else if (a[m] >= x)
                r = m-1;
            else
                l = m+1;
        }
        cout<<"no found"; 
    }
}