#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define ii int
#define pb push_back
#define ck(x) cout << #x << " = " << x << endl;

struct Node
{
    string name;
    vector<Node> children;
};

void printTree(const Node &node, string spaces = "")
{
    cout << spaces << node.name << endl;

    if (!node.children.empty())
    {
        spaces += "├── ";

        for (size_t i = 0; i < node.children.size() - 1; i++)
        {
            printTree(node.children[i], spaces + "│   ");
        }

        printTree(node.children.back(), spaces + "    ");
    }
}

int main()
{
    Node tree = {"root", {{"a", {}}, {"b", {{"p", {}}, {"q", {{"r", {}}, {"s", {}}}}}}, {"d", {{"e", {}}, {"f", {{"h", {}}, {"i", {}}}}, {"g", {}}}}}};

    printTree(tree);

    return 0;
}
