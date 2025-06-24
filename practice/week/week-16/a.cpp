#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        set<int> st;
        int pos[101];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            st.insert(a[i]);
        }
        sort(b, b + n);

        if (st.size() <= 2 and b[0] == 1)
        {
            int x = b[n - 2] + b[n - 1];
            if (isPrime(x))
                cout << "-1" << endl;
            else{
                int k=0;
                for(int i = 0; i < n; i++) {
                    if(a[i] == b[n - 1] and k<=2) {
                        cout << i + 1 << " ";
                        k++;
                    }
                    if(k==1)cout<<1<<endl;
                    if(k==2) break;
                }
            }
        }
        else if (n == 2)
        {
            int x = b[0] + b[1];
            if (isPrime(x))
                cout << "-1" << endl;
            else
                cout << "1 2" << endl;
        }
        else
        {
            vector<int> o, e;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2)
                    o.pb(i + 1);
                else
                    e.pb(i + 1);
            }
            int oo = o.size();
            int ee = e.size();
            if (e.size() < 2)
            {
                cout << o[oo - 1] << " " << o[oo - 2] << endl;
            }
            else
                cout << e[ee - 1] << " " << e[ee - 2] << endl;
        }
    }
    return 0;
}