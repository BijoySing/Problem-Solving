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
    // cout << "hi";
    int n, q;
    cin >> n >> q;
    int a[n];
    int s[n+5];
    int x = 0;
    s[0]=0;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        
        cin >> a[i];
        x += a[i];
        s[i+1]=x;
        // ck(s[i]);
    }
    for (size_t i = 0; i < q; i++)
    {
        /* code */
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l-1] << endl;
    }
}