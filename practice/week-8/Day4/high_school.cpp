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
    // cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        if(x==y)cout<<"="<<endl;
        else if(x==2 && y==4)cout<<"="<<endl;
        else if(x==4 && y==2)cout<<"="<<endl;
        else if(x==1)cout<<"<"<<endl;
        else if(y==1)cout<<">"<<endl;
        else if(x==2 && y==3)cout<<"<"<<endl;
        else if(x==3 && y==2)cout<<">"<<endl;
        else if(x>y)cout<<"<"<<endl;
        else cout<<">"<<endl;

    }

}
