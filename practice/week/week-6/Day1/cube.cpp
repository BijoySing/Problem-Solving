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
vector<int> v;
void cube()
{
    for (int i = 1; i <= 10000; i++)
    {
        int x = i * i * i;
        v.pb(x);
        // ck(x);
    }
}
bool bn(int x)
{
    int l = 0;
    int r = 10000;
    int mid = (l + r) / 2;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (v[mid] == x)
            return true;
        else if (v[mid] > x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return false;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cube();

    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int f = 0;
        for (int i = 0; i < 10000; i++)
        {
            int k = x - v[i];
            if (bn(k))
            {
                f = 1;
                break;
            }
        }
        if (f)
            yes;
        else
            no;
    }
}
