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
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
}
void insertAtPosition(Node *&head, int id, Node *prev)
{
    if (id == 0)
    {
        prev->next = head;
        head = prev;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < id - 1; i++)
        {
            tmp = tmp->next;
        }
        prev->next = tmp->next;
        tmp->next = prev;
    }
}
void deleteindex(Node *&head, int id)
{
    if (id == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < id - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *temp = tmp->next;
        tmp->next = tmp->next->next;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(50);
    Node *cd = new Node(150);
    head = a;
    a->next = b;
    b->next = c;
    c->next = cd;
   int id, x=9;
    cin >> id;
    Node *prev = new Node(x);
    // insertAtPosition(head, id, prev);
    printList(head);
    cout << endl;

    deleteindex(head, id);
    printList(head);
    // cout << head->val;
}