#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
int32_t main()
{
    int t = 1;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        cout<<a[0]<<" ";
        for(int i = 1; i <n ; i++) {
            // Your code here
            if(a[i]==a[i-1])continue;
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}