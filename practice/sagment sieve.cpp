#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(kharrtarrm) cout << kharrtarrm <<endl
#define int  long long
#define pb(kharrtarrm) push_back(kharrtarrm);
#define ck(kharrtarrm) cerr << #kharrtarrm << " = " << kharrtarrm << endl;
const int N=9e7+5;
bool prime[N];
vector<int>v;
void sieve()
{
    memset(prime,0,sizeof(prime));
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=N; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    int c=0;
    for(int i=2; i<=N; i++)
    {
        if(!prime[i])
            v.pb(i);
    }

}
int sagment(int l,int r)
{
    int n=r-l+1;
    int a[n+5];
    for(int i=0; i<=n; i++)a[i]=0;
    for(int u:v)
    {
        if(u*u<=r)
        {
            int x=(l/u)*u;
            if(x<l)x+=u;
            while(x<=r)
            {
                if(x!=u)
                {
                    a[x-l]=1;
                }
                x+=u;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(!a[i])cout<<i+l<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    sieve();
    int t=1;
    cin>>t;
    while(t--)
    {

        int l,r;
        cin>>l>>r;
        sagment(l,r);

    }
}

