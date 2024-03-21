#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define output(x) cout << x << endl
#define print(x) cout << #x << " = " << x << endl
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pi acos(-1)

int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,i,j,k;
        string s;
        char ch;
        cin>>n>>ch>>s;
        s+=s;
        int ans=0;
        if(ch=='g')
        {
            cout<<0<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]==ch)
            {
                for(j=i+1;j<2*n;j++)
                {
                    if(s[j]=='g')
                    {
                        ans=max(j-i,ans);
                        i=j;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;

}