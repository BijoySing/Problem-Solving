#include <iostream>
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

void removeDuplicates(Node *&head)
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *runner = current;
        while (runner->next != nullptr)
        {
            if (runner->next->val == current->val)
            {
                Node *temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void print_linked_list(Node *head)
{
    if (head == nullptr)
    {
        cout << "Empty linked list" << endl;
        return;
    }

    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int main()
{
    int val;
    Node *head = nullptr;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    removeDuplicates(head);
    print_linked_list(head);

    return 0;
}
