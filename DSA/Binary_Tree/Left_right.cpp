#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int sum = 0;

Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft = (l == -1) ? NULL : new Node(l);
        Node *myRight = (r == -1) ? NULL : new Node(r);
        p->left = myleft;
        p->right = myRight;
        if (p->left)
            q.push(myleft);
        if (p->right)
            q.push(myRight);
    }
    return root;
}
vector<int> a, b;
void printLeft (Node *root)
{
    // cout<<root->val<<" ";
    if (root->left)
    {
        printLeft (root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->right->val << " ";
    }
    // a.push_back(root->val);
}
void printRight (Node *root)
{
    // cout << root->val << " ";
    if (root->right)
    {
                cout << root->right->val << " ";

        printRight (root->right);
    }

    else if (root->left)
    {
                cout << root->left->val << " ";

        printRight (root->left);
    }
}
void fun(Node *root)
{
    if (root->left)
        printLeft(root);
    cout<<root->val<<" ";    
    if (root->right)
        printRight (root);
}

int32_t main()
{
    Node *root = input();
    fun(root);
    // left(root);
    // right(root);
  
}
