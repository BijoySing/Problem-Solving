#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int f=0;
        for (int i = 0; i <= 1000; i++)
        {
            for (int j = 0; j <= 10000; j++)
            {
               int x=a*i+b*j;
               if(x==c){
                f=1;
                break;
               }
            }
        }
        if(f)yes;
        else no;
    }
}