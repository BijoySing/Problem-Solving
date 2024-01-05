
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
    list<string> l;
    void push(string val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    string front()
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

int main()
{
    int t = 1;
    myQueue q;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        int a=0,b=0;
        for (int i = 0; i < sz; i++)
        {
            if(s[i]=='0')a++;
            else b++;
        }
        if(a==b)yes;
        else no;
        
    }
}