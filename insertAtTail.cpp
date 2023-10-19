#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node *head;

/// adding a tail ->

void insertAtTail(struct Node *newNode)
{
    struct Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;
}

/// Printing Out the LinkedList ->

void printLinkedList()
{
    struct Node *t = head;

    while (t != NULL)
    {
        cout << t->data << " -> ";
        t = t->Next;
    }
    cout << endl;
}

int main()
{
    /// Declarations Of Pointers ->

    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;

    /// Allocating Memories ->

    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    /// Pushing Data's ->

    one->data = 4;
    two->data = 7;
    three->data = 9;
    four->data = 11;

    /// Connecting Node's ->

    one->Next = two;
    two->Next = three;
    three->Next = four;
    four->Next = NULL;

    head = one;

    /// Before adding a node ->

    cout << "Before :-" << endl;
    printLinkedList();

    /// Created a New Node for Tail

    struct Node *newNode = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 14;
    newNode->Next = NULL;

    insertAtTail(newNode);

    /// After adding a node ->

    cout << "After :-" << endl;
    printLinkedList();
}