#include<bits/stdc++.h> // Include necessary libraries
using namespace std;

class Node
{
public:
    int val;          // Data of the node
    Node* next;       // Pointer to the next node

    Node(int val)     // Constructor to initialize a node with a given value
    {
        this->val = val;  // Set the value of the node
        this->next = NULL; // Initially, the node points to NULL (no next node)
    }
};

int main()
{
    // Create nodes and establish connections between them
    Node* head = new Node(10);  // Create the head node with a value of 10
    Node* a = new Node(20);     // Create a node with a value of 20
    Node* b = new Node(30);     // Create a node with a value of 30
    Node* c = new Node(40);     // Create a node with a value of 40
    Node* d = new Node(50);     // Create a node with a value of 50

    // Connect nodes to form a linked list
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // Traverse the linked list and print the values of each node
    Node* tmp = head;  // Initialize a temporary pointer to the head of the list
    while (tmp != NULL)  // Traverse until the end of the list (NULL is encountered)
    {
        cout << tmp->val << endl;  // Print the value of the current node
        tmp = tmp->next;  // Move to the next node in the list
    }

}
