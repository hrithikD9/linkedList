#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

int main()
{

    /// Declarations Of Pointers ->

    struct Node *head;
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

    /// Printing Out the LinkedList ->

    while (head != 0)
    {
        cout << head->data << " -> "  << " ";
        
        head = head->Next;

    }

    return 0;
}