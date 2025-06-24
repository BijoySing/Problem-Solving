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
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> odd;
    // for (int i = 1; i <= 1000000; i++)
    // {
    //     int x = i * i;
    //     odd.push_back(x);
    // }

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (int)floorl(sqrtl(n)) << '\n';
        int x = (int)floorl(sqrtl(n));
        
    }
}