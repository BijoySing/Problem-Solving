#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int main()
{
    int t = 1;
    while (t--)
    {
        stack<int> s;
        queue<int> q;
        int n, m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        if (n != m)
            no;
        else
        {
            int f=0;
            for (int i = 0; i < n; i++)
            {
                int x=s.top();
                int y=q.front();
                if(x!=y)f=1;
                // ck(x);
                // ck(y);
                s.pop();
                q.pop();

            }
            f?no:yes;
        }
    }
    return 0;
}