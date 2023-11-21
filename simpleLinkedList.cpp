#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};
//
int main()
{

    //! Allocating Memories Dynamically->

    struct Node *head;
    struct Node *a = new Node;
    struct Node *b = new Node;
    struct Node *c = new Node;

    //* Pushing Data's ->

    a->data = 7;
    b->data = 9;
    c->data = 11;

    //? Connecting Node's ->

    a->Next = b;
    b->Next = c;
    c->Next = NULL;

    head = a;

    // Printing Out the LinkedList ->

    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->Next;
    }

    //! Deallocating Memories ->

    delete a;
    delete b;
    delete c;

    return 0;
}
