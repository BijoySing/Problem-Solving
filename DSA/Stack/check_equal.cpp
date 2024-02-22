#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class myStack
{

public:
    vector<int> v;
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    void push(int x)
    {
        sz++;
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deletenode=tail;
                    tail=tail->prev;

        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        delete deletenode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz)
            return false;
        else
            return true;
    }
};

int32_t main()
{
    int t = 1;
    while (t--)
    {
        myStack s1, s2;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.push(x);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            s2.push(x);
        }
        if (n != m)
            no;
        else
        {
            int f=0;
            for (int i = 0; i < n; i++)
            {
                /* code */
                int x=s1.top();
                int y=s2.top();
                if(x!=y)f=1;
                s1.pop();
                s2.pop();

            }
            if(f)no;
            else yes;
            
        }
    }
    return 0;
}