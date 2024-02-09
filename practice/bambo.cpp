#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
class cmp1
{
public:
    bool operator()(int a, int b) const
    {
        if (a % 2 != 0 && b % 2 != 0)
        {
            return a > b;
        }
        return a > b;
    }
};
class cmp2
{
public:
    bool operator()(int a, int b) const
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            return a > b;
        }
        return a > b;
    }
};

int32_t main()
{
    priority_queue<int, std::vector<int>, cmp1> odd;
    priority_queue<int, std::vector<int>, cmp2> even;

    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int x;
        cin >> x;
        if (x == 1)
        {
            int a;
            cin >> a;
            if (a % 2)
                odd.push(a);
            else
                even.push(a);
        }
        else if (x == 2)
        {
            // ck(v.size());

            if (even.empty())
                cout << "empty" << endl;

            else
            {
                int ans = even.top();
                even.pop();
                cout << ans << endl;
            }
        }
        else if (x == 3)
        {
            if (odd.empty())
                cout << "empty" << endl;
            else
            {
                int ans = odd.top();
                odd.pop();
                cout << ans << endl;
            }
        }
    }
}
