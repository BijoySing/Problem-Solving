#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
class myStack
{

public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty(){
        if(v.size())return false;
        else return true;
    }
};

int main()
{
    int t = 1;
    while (t--)
    {
        myStack s;
        myQueue q;
        int n, m;
        cin >> n>>m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        
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