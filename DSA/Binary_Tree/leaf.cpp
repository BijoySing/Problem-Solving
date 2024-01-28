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
vector<int>v;
void leaf(Node *root)
{
    // if(root==NULL)

   if(root->left==NULL and root->right==NULL){
    v.push_back(root->val);
    // cout<<root->val<<" ";
   }
   else{
    // sum+=root->val;
   }
      if(root->right)leaf(root->right);

   if(root->left)leaf(root->left);
//    return sum;
}

int32_t main()
{
    Node *root = input();
    leaf(root);
    sort(v.rbegin(),v.rend());
    for(int u:v)cout<<u<<" ";
// cout<<ans<<endl;
    return 0;
}
