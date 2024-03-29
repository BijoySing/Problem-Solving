#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
// #define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int leetcode(int x, int y)
{
    int op1 = 0;
    int a1 = x, b1 = y;

    while (x != y)
    {
        if (x > y)
        {
            if (x % 11 == 0)
            {
                x /= 11;
            }
            else if (x % 5 == 0)
            {
                x /= 5;
            }
            else
            {
                x -= 1;
            }
        }
        else
        {
            x += 1;
        }
        // ck(x);

        op1 += 1;
    }
    x = a1;
    y = b1;
    int op2 = 0;
    while (x != y)
    {
        if (x > y)
        {
            if (x % 11 == 0)
            {
                x /= 11;
            }
            else if (x % 5 == 0)
            {
                x /= 5;
            }
            else
            {
                x += 1;
            }
        }
        else
        {
            x += 1;
        }
        // ck(x);

        op2 += 1;
    }
    x=a1;
    y=b1;
    int op3=0;
    while (x != y)
    {
        if (x > y)
        {
            if (x % 11 == 0)
            {
                x /= 11;
            }
            else if (x % 5 == 0)
            {
                x /= 5;
            }
            else
            {
                x -= 1;
            }
        }
        else
        {
            x += 1;
        }
        ck(x);

        op1 += 1;
    }

    return min(op1, op2);
}
int32_t main()
{
    // int t = 1;
    // cin>>t;
    // while (t--)

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int t = 1;
    while (t--)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        cout << leetcode(x, y) << endl;
        ;
    }
}