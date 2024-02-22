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
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    { // this is constructor
        this->val = val;
        this->next = NULL;
                this->prev = NULL;

    }
};
bool palindrome(Node *head ,Node *tail)
{
    Node *l = head;
    Node *r=tail;
    while (l != NULL)
    {
        // cout << temp->val << " ";
       int x=l->val;
       int y=r->val;
       if(x!=y)return false;

        l=l->next;
        r=r->prev;
    }
    // cout<<endl;
    return true;
}
void add(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int32_t main()
{
    int t = 1;
    Node *head = NULL;
    Node *tail = NULL;
    while (t)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        add(head, tail, val);
    }
    // print(head);
    if (palindrome(head,tail))
        yes;
    else
        no;
}