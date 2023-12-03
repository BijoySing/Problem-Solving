#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(kharrtarrm) cout << kharrtarrm <<endl
#define int  long long
#define pb(kharrtarrm) push_back(kharrtarrm);
#define ck(kharrtarrm) cerr << #kharrtarrm << " = " << kharrtarrm << endl;
const int N=1e5+5;
int prime[N];
void sieve(int n)
{
    memset(prime,0,sizeof(prime));
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(!prime[i])
            cout<<i<<"-";
    }
    cout<<endl;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        sieve(n);

    }
    return 0;
}

