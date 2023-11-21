#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head;

/// Deleting Node ->

void deleteNode()
{
    struct node *temp = head;
    head = head->next;
    delete temp;
}

//! Printing Out The Node ->

void printLinkedList()
{
    struct node *currentNode = head;

    while (currentNode != NULL)
    {
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }

    cout << endl;
}

int main()
{
    //? Memory Allocaions For Node's ->

    struct node *one = new node;
    struct node *two = new node;
    struct node *three = new node;
    struct node *four = new node;

    //* Pushing Data's ->

    one->data = 4;
    two->data = 7;
    three->data = 9;
    four->data = 11;

    //? connecting Node's ->

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = one;

    cout << " Before ::: " << endl;
    printLinkedList();

    /// Calling Delete Function ->
    deleteNode();

    cout << "After ::: " << endl;
    printLinkedList();

    // De-Allocating Memories
    while (head != nullptr)
    {
        deleteNode();
    }
}
