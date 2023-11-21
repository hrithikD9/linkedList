#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

/// adding a tail ->

void insertAtTail(struct Node *newNode)
{
    struct Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

/// Printing Out the LinkedList ->

void printLinkedList()
{
    struct Node *t = head;

    while (t != nullptr)
    {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << endl;
}

void deAllocation()
{
    Node *current = head;

    while (current != nullptr)
    {

        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

int main()
{
    /// Allocating Memories ->

    struct Node *one = new Node;
    struct Node *two = new Node;
    struct Node *three = new Node;
    struct Node *four = new Node;

    /// Pushing Data's ->

    one->data = 4;
    two->data = 7;
    three->data = 9;
    four->data = 11;

    /// Connecting Node's ->

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = nullptr;

    head = one;

    /// Before adding a node ->

    cout << "Before :-" << endl;
    printLinkedList();

    /// Created a New Node for Tail

    struct Node *newNode = new Node;
    newNode->data = 14;
    newNode->next = nullptr;

    insertAtTail(newNode);

    /// After adding a node ->

    cout << "After :-" << endl;
    printLinkedList();

    deAllocation();
}
