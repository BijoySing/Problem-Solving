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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f = 0, x, y, z;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                for (int j = i + 2; j < n; j++)
                {
                    // cout<<a[i]<<" "<<a[j]<<endl;
                    if (a[i + 1] > a[j])
                    {

                        x = i, y = i + 1, z = j;
                        f = 1;
                        break;
                    }
                }
        }
        if (f)
        {
            yes;
            cout << x + 1 << " " << y + 1 << " " << z + 1 << endl;
        }
        else
            no;
    }
}
