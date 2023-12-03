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
    { // this is constructor
        this->val = val;
        this->next = NULL;
    }
};
int32_t main()
{
    int t = 1;
    while (t--)
    {
        Node *head = new Node(10 );        // dynamiccally created
        cout << head->val << endl;       // Printing the val of head
        Node *a = new Node(20);
        head->next = a;                  // here the address of a is store in head->next;
        cout << head->next->val << endl; // Printing the val of a
        cout << a->val << endl;          // Printing the val of a
    }
}