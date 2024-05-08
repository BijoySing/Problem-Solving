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
        int a[n];
        int b[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {

            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        
        int f=0;
        for (int i = 0; i < n; i++)
        {
            int x=a[i]+1;
            if(b[i]==x || b[i]==a[i])
            {
                continue;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            no;
        }
        else
        {
            yes;
        }
    }
}
