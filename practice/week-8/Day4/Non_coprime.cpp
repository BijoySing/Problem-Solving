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

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if ((l >= 1 and r <= 3) || (l == r and is_prime(l) && is_prime(r)))
        {
            cout << "-1\n";
            // for(int i = 1; i <=l; i++) {
            // cout<<i<<" "<<l-i<<endl;
        }

        else
        {
            int k = max(l, r);
            if (l == r and l % 2)
            {
                for (int i = 2; i * i <= l; i++)
                {
                    if (l % i == 0)
                    {
                        cout << i << " " << l - i << endl;
                        break;
                    }
                }
            }
            else if (k % 2 == 0)
            {
                cout << k / 2 << " " << k / 2 << endl;
            }

            else
            {
                cout << k / 2 << " " << k / 2 << endl;
            }
        }
        // cout << endl;
    }
}