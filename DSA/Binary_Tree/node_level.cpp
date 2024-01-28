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
void level(Node *root,int x)
{
    queue<pair<Node *,int>>q;
    q.push({root,0});
    int F=0;
    while (!q.empty())
    {
        pair<Node *,int>pr=q.front();
        Node *node=pr.first;
        int level=pr.second;
        q.pop();
        if(level==x){
            cout<<node->val<<" ";
                F=1;
        }
         if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
        /* code */
    }
    if(!F)cout<<"Invalid";
    
}

int32_t main()
{
    Node *root = input();
    int x;
    cin>>x;
    level(root,x);
    return 0;
}
