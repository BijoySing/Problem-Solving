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
void factor(int n)
{
    int c=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;c++;
            }

            cout<<i<<"^"<<c<<" * ";c=0;
        }

    }
    if(n>1)cout<<n<<"^1"<<endl;

}
int32_t main()
{
    sieve();
    int t=1;
    cin>>t;
    while(t--)
    {

        int n;
        while(cin>>n)
        {
            if(n==0)break;
            int c=0;
            factor( n);
        }
        return 0;
    }
}

