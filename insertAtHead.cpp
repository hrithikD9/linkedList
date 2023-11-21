#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;

/// Insert At Head ->
void insertAtHead(int data)
{

    struct Node *tempNode = new Node;
    tempNode->data = data;
    tempNode->next = head;
    head = tempNode;
}

void printLinkedList()
{
    //? Printing Out the LinkedList ->

    struct Node *t = head;

    while (t != nullptr)
    {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << endl;
}

//! Deallocate Linked List

void deAllocation()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

int main()
{

    //* Allocating Memories -> ->

    struct Node *a = new Node;
    struct Node *b = new Node;
    struct Node *c = new Node;

    //*? Pushing Data's ->

    a->data = 7;
    b->data = 9;
    c->data = 11;

    //! Connecting Node's ->

    a->next = b;
    b->next = c;
    c->next = NULL;

    head = a;

    /// Before adding a node ->
    cout << "Before ::: " << endl;
    printLinkedList();

    /// The Node ->
    insertAtHead(17);

    /// After adding a node ->
    cout << "After ::: " << endl;
    printLinkedList();

    // deAllocated Linkedlist
    deAllocation();

    return 0;
}
