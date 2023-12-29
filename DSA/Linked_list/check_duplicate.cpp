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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    Node *x = head;
    for (Node *tmp = head; tmp != nullptr; tmp = tmp->next)
    {
        cout << tmp->val << " ";

        // bool p = false;

        // for (Node *a = tmp->next; a != nullptr; a = a->next)
        // {
        //     if (tmp->val == a->val)
        //     {
        //         p = true;
        //         break;

        //     }
        // }

        // if (!p)
        // {
        //     for (Node *x = head; x != nullptr; x = x->next)
        //     {
        //         if (x->val == tmp->val)
        //         {
        //             cout << x->val << " ";
        //         }
        //     }
        // }
    }
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
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        Node *tmp1 = tmp;
        while (tmp1->next != NULL) 
        {
            if (tmp1->next->val == tmp->val)
            {
                Node *deleteNode=tmp1->next;
                tmp1->next=tmp1->next->next;
                delete deleteNode;
            }
            else{
                tmp1=tmp1->next;
            }
        }
    }

    print_linked_list(head);
    return 0;
}