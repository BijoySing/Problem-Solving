#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t,m,n,i,j,s=0,a[101],k,h;
    for(i=0; i<=100; i++)
    {
        s=s+i;
        a[i]=s;
        // cout<<a[i]<<" ";
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n;
        int s1=0,p=0;
        for(i=0; i<n; i++)
        {

            cin>>h;
            s1=s1+h;
            if(s1<a[i])
            {
                p=1;
            }

        }
        if(p==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }}}