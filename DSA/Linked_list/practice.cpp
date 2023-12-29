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
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int print_linked_list(Node *head)
{
    bool p = false;
    Node *tmp = head;
    int sz = 0;
    for (Node *tmp = head; tmp != nullptr; tmp = tmp->next)
    {
        sz++;
    }
    return sz;
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int32_t main()
{
    int val;
    Node *head = NULL;
    Node *head1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, val);
    }
    int sz = print_linked_list(head);
    int sz1 = print_linked_list(head1);
    if (sz1 != sz)
        no;
    else
    {
        
            Node *tmp1 = head1;
            Node *tmp = head;
            int f = 0;

            for (Node *tmp1 = head1; tmp1 != nullptr; tmp1 = tmp1->next)
            {
                if (tmp1->val != tmp->val)
                {
                    f = 1;
                    break;
                }
                tmp = tmp->next;
            }
            if (f)
                no;
            else
                yes;
       
    }
    return 0;
}