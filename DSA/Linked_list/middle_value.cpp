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
    bool p = false;
    Node *tmp = head;
    int sz = 0;
    for (Node *tmp = head; tmp != nullptr; tmp = tmp->next)
    {
        sz++;
    }
    if (sz % 2)
    {

        for (int i = 0; i < sz/2; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<endl;
    }
    else{
        for (int i = 0; i < (sz/2)-1; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<endl;
        cout<<tmp->next->val<<endl;
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
    print_linked_list(head);
    return 0;
}