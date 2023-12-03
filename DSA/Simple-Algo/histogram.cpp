/**
author:  Bijoy Singh Rajput
 " Nam Tho Sunahi Hoga"
**/
#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pp(x) cout << x <<endl
#define int long long
#define ck(x) cerr << #x << " = " << x << endl;
#define sz 10000
int32_t main()
{
    int t=1,k=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int hist[n];
        for(int i=0; i<n; i++)
        {
            cin>>hist[i];
        }
        stack<int> st;
        int mxArea = 0,top,tpArea,i=0;
        while (i < n)
        {
            if (st.empty() || hist[st.top()] <= hist[i])
                st.push(i++);
            else
            {
                top = st.top();
                ck(top);
                st.pop();
                tpArea = hist[top] * (st.empty() ? i :
                                      i - st.top() - 1);
                                      ck(tpArea);
                mxArea=max(mxArea,tpArea);
            }
        }
        while (st.empty() == false)
        {
            top = st.top();
            st.pop();
            tpArea = hist[top] * (st.empty() ? i :
                                  i - st.top() - 1);
            mxArea=max(mxArea,tpArea);
        }
        cout<<"Case "<<k++<<": "<<mxArea<<endl;
    }
}


