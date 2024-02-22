#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
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

int32_t main()
{
    int t = 1;
    while (t--)
    {
        myStack st;
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        cout << st.top() << endl;
        pp(st.size());
        st.pop();
        cout << st.top() << endl;
        
    }
    return 0;
}