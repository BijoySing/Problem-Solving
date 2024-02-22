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
int  Bex(int base,int power)
{
    int ans=1;
    while(power){
        if(power%2){
            ans=ans*base;
            power--;
        }
        else{
            base*=base;
            power/=2;
        }
    }
    return ans;


}

int32_t main()
{
    sieve();
    int t=1;
    cin>>t;
    while(t--)
    {
        int base,power;
        cin>>base>>power;
        cout<<Bex(base,power)<<endl;


    }
}

