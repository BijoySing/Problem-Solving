#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
//  int mx=0;
    // int mn=INT_MAX;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void solve(Node *head,int x)
{
    if (head == NULL)
    {
        cout << "Invalid  list" << endl;
        return;
    }

    bool p = false;
    Node *tmp = head;
    // int mx=0;
    // int mn=head->val;
    int c=0;
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        if(tmp->val==x){
            p=true;break;
        }c++;
        // cout<<x<<endl;
        
    }
    if(p)cout<<c<<endl;
    else cout<<"-1"<<endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
    
    
    int val;
    Node *head = NULL;
        Node *tail = NULL;

    // int mx=0;
    // int mn=INT_MAX;
    while (true)
    {
        cin >> val;
        //  int x=tmp->val;
       
        if (val == -1)
        
            break;
        insert_at_tail(head,tail, val);
    }
    int x;
    cin>>x;
    solve(head,x);}
    // cout<<d<<endl;
    return 0;
}