/**
author:  Bijoy Singh Rajput
 " Nam Tho Sunahi Hoga"
**/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(x) cout << x <<endl
//#define int long long
#define ii int
#define ck(x) cerr << #x << " = " << x << endl;
/**
        regex b("((aa)|(aaa)|(bb)|(bbb))*");
        cout<<(regex_match(s,b)?"YES\n":"NO\n");

                if(s=="YES" || s=="yES" || s=="yes" || s=="Yes" ||s=="YeS" || s=="YEs" || s=="yEs"|| s=="yeS")
        {
            yes;
        }
        else no;
    }
    */
int main()
{

    int n;
    cin >> n;
    int k=0;
    for(int i=1; i<=n; i++)
    {
        map<string,vector<string>>mp;
        map<string,int>ind;
        int m;
        cin>>m;
        vector<string> ans;
        for(int j=1; j<m; j++)
        {

            string x,y;
            cin >> x >> y;
            mp[x].push_back(y);
            ind[y]++;
        }

        priority_queue<string, vector<string>, greater<string> > q;

        for(auto [x,y] : mp)
        {
            if( ind[x]==0)
            {
                q.push(x);
            }
        }

        while(q.size()!=0)
        {
            string u = q.top();
            ans.push_back(u);
            q.pop();

            for(auto v : mp[u])
            {
                ind[v]--;
                if(ind[v]==0)
                {
                    q.push(v);
                    //    ans.push_back(v);

                }
            }
        }

    cout<<"Scenario #"<<++k<<":"<<endl;;

    for(auto u : ans )
        cout << u <<endl;;
    cout << endl;}

}

/**

2
4
SwimmingPool OldTree
BirdsNest Garage
Garage SwimmingPool
3
Toilet Hospital
VideoGame Toilet
*/
