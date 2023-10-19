#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node *head;

/// Insert At Head ->
void insertAtHead(int data)
{

    struct Node *newNode = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->Next = head;
    head = newNode;
}

void printLinkedList()
{
    /// Printing Out the LinkedList ->

    struct Node *t = head;

    while (t != 0)
    {
        cout << t->data << " -> ";
        t = t->Next;
    }
    cout << endl;
}

int main()
{

    /// Declarations Of Pointers ->

    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    /// Allocating Memories ->

    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));

    /// Pushing Data's ->

    a->data = 7;
    b->data = 9;
    c->data = 11;

    /// Connecting Node's ->

    a->Next = b;
    b->Next = c;
    c->Next = NULL;

    head = a;

    /// Before adding a node ->
    cout << "Before ::: " << endl;
    printLinkedList();

    /// The Node ->
    insertAtHead(17);

    /// After adding a node ->
    cout << "After ::: " << endl;
    printLinkedList();

    return 0;
}