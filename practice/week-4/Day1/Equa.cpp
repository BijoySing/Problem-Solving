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
        cin>>n;
        int a[n];
        int mn=INT_MAX;
        for(int i = 0; i <n; i++) {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
       if(mn==a[0] and mn==a[n-1])yes;
       else no;

    }

}
