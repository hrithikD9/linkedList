#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node *head;

/// Deleting Node ->

void deleteNode()
{
    struct Node *temp = head;
    head = head->Next;
    delete (temp);
}

/// Printing Out The Node ->

void printLinkedList()
{
    struct Node *currentNode = head;

    while (currentNode != NULL)
    {
        cout << currentNode->data << " -> ";
        currentNode = currentNode->Next;
    }

    cout << endl;
}

int main()
{
    /// Declaration Of Node's ->

    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;

    /// Memory Allocaions For Node's ->

    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    /// Pushing Data's ->

    one->data = 4;
    two->data = 7;
    three->data = 9;
    four->data = 11;

    /// connecting Node's ->

    one->Next = two;
    two->Next = three;
    three->Next = four;
    four->Next = NULL;

    head = one;

    cout << " Before ::: " << endl;
    printLinkedList();

    /// Calling Delete Function ->
    deleteNode();

    cout << "After ::: " << endl;
    printLinkedList();
}