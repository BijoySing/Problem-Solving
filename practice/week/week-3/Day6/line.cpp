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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                p += (i);
            else
                p += n - i - 1;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            if (s[i] == 'L')
            {

                x = (n - 1 - i) - i;
                v.push_back(x);
            }
            else
            {
                x =i- (n - 1 - i);
                v.push_back(x);
 
            }
        }
       sort(v.rbegin(),v.rend());
       for(int i = 0; i <n; i++) {
           if(v[i]>0)p+=v[i];
           cout<<p<<" ";
       }
        cout << endl;
    }
}
