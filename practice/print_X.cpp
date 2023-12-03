/**
author: Bijoy Singh Rajput
 "Nam Tho Sunahi Hoga"
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define ii int
#define ck(x) cout << #x << " = " << x << endl;
int32_t main()
{
    // Your code here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (i == j and i + j + 1 == n)
                cout << "X";
            else if (i == j)
                cout << '\\';
            else if (j + i +1== n)
                cout << '/';
            else
                cout << " ";
        }
        cout << endl;
    }
}