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
Node *head = NULL;

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(50);
    Node *cd = new Node(150);
    head = a;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = cd;
    Node *temp = head;
    while (temp != NULL)

    {
        cout << temp->val << "->";
        temp = temp->next;
    }

    // cout << head->val;
}