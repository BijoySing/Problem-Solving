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
    // cin >> t;
    while (t--)
    {
        int n,a,b,p,q;
        cin >> n>>a>>b>>p>>q;
        int ans=0;
        int lcm=(a*b)/__gcd(a,b);
        int x=n/a-n/lcm;
        int y=n/b-n/lcm;
        int z=n/lcm;
        ans+=x*p+y*q;
        if(p>q)
        {
            ans+=z*p;
        }
        else
        {
            ans+=z*q;
        }
        cout<<ans<<endl;

    }

}
