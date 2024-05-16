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

int prime_divisor(int n)
{
    int ans = 1;
    int m = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (m % i == 0)
        {
            while (m % i == 0)
            {
                m /= i;
            }
            ans *= i;
        }
    }
    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        cout<<"Yes"<<endl;
        else
        {
            int f = 0;
            while (b > 1)
            {

                int x = __gcd(a, b);
                if (x == 1)
                {
                    f = 1;
                    break;
                }
                else
                {
                    b /= x;
                }
            }
            if(!f)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        
        }
    }
}
