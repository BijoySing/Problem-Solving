#include <bits/stdc++.h>
using namespace std;
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
void print_linked_list(Node *head)
{
    // if (head == NULL)
    // {
    //     return;
    // }
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {

            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    if (head == NULL)
    {
        return;
    }
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {

            return;
        }
    }
    if (tmp->next == NULL)
    {

        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {

        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
            print_linked_list(head);
        }
        else if (op == 2)
        {
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
                print_linked_list(head);
            }
            else
            {
                delete_from_position(head, pos);
                print_linked_list(head);
            }
        }
        else if (op == 0)
        {
            int v;
            cin >> v;

            insert_at_head(head, v);
            print_linked_list(head);
        }
    }
    return 0;
}
