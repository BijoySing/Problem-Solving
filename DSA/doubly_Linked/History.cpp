#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    { // this is constructor
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
bool visit(string s, Node *head ,Node *&cur)
{
    Node *tmp = head;
    int f=0;

    while (tmp != NULL)
    {
        if (tmp->val == s)
        {
            cur=tmp;
            f=1;
            return true;
        }
        tmp = tmp->next;
    }
    

    return false;
}

void insert_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void forward(Node *&cur)
{
    // cout<<head->val<<"/";
    // if(head->prev==NULL){
    //     cout<<head->next->val<<endl;

    // }

     if (cur->next != NULL)
    {
        cout << cur->next->val << endl;
        cur = cur->next;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void back(Node *&cur)
{
    // Node *tmp=cur;
    // cout<<tmp->next->va++++++l<<endl;
    // cout<<cur->val<<endl;
    // ck(cur->val);

    if (cur->prev != NULL)
    {
        cout << cur->prev->val << endl;
        cur = cur->prev;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
int32_t main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
            ;
        }
        insert_tail(head, tail, s);
        /* code */
    }
        Node *cur=head;

    int q;
    cin >> q;
    while (q--)
    {

        string s;
        cin >> s;
        if (s == "visit")
        {
            string c;
            cin >> c;
            bool f = visit(c,head, cur);
            // cout<<cur->val<<endl;
            if (f)
                cout << c << endl;
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "next")
        {
            forward(cur);
        }
        else if (s == "prev")
        {
            back(cur);
        }
    }
}