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
#define count n;
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int pos;
    cin >> pos;
    v.insert(v.begin() + pos, b, b + m);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
