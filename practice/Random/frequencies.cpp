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
    // cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n ;
        int a[n];
        for (int i = 0; i < n; i++)
        {
          cin>>a[i];
        }
        sort(a,a+n);
        cout << a[0]+a[1] << endl;
    }
}