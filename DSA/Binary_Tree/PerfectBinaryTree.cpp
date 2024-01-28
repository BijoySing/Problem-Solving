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
int sum=0;

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
bool bnTree(Node * root){
    // if(root->left==NULL and root->right==NULL){

    // }
    // else if(root->left==NULL || root->right==NULL){
    //     return false;

    // }
    // if(root->left)bnTree(root->left);
    // if(root->right)bnTree(root->right);
    // return true;
      if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return false;
    bool l = bnTree(root->left);
    bool r = bnTree(root->right);
    if (l == false || r == false)
        return false;
    return true;
}
int32_t main()
{
    Node *root = input();
   bool t= bnTree(root);
   if(t)yes;
   else no;
    return 0;
}
