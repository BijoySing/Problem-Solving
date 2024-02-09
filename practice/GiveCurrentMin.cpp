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
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        priority_queue<int, vector<int>, greater<int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p.push(a[i]);
        }
        int q;
        cin >> q;
        while (q--)
        {
            /* code */
            int x;
            cin >> x;
            if (x == 0)
            {
                int m;
                cin >> m;
                p.push(m);
                // sort(v.begin(), v.end());
                if (p.size())
                    cout << p.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else if (x == 1)
            {

                // sort(v.begin(), v.end());
                if (p.size())
                    cout << p.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
            {
                // sort(v.begin(), v.end());
                if (p.size() != 0)
                    // cout << "Empty" << endl;
                    p.pop();

                // v.erase(std::remove(v.begin(), v.end(), v[0]), v.end());
                if (p.size())
                    cout << p.top() << endl;
                else
                    cout << "Empty" << endl;
            }
        }
    }
}