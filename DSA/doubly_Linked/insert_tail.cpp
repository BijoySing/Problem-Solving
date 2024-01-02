#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    { // this is constructor
        this->val = val;
        this->next = NULL;
    }
};
void pp(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
        /* code */
    }
}
void insert_tail(Node *&head, Node* &tail ,int val)
{
    Node *newNode = new Node(val);
    // Node *temp=head;
    if(tail==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }
    
    head->next = newNode;
}

int main()
{
    Node *head =NULL;
    Node *tail=NULL;
    // cout<<head->val<<endl;

    while (1)
    {
        /* code */

        int pos, val;
        cin >> val;
        if(val==-1)break;
        insert_tail(head,tail, val);
    }
    pp(head);
}