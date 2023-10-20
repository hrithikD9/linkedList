#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node *head;

int findLength()
{

    int len = 0;
    struct Node *temp = head;

    while (temp != NULL)
    {
        len = len + 1;
        temp = temp->Next;
    }

    return len;
}

int main()
{

    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;

    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    one->data = 4;
    two->data = 7;
    three->data = 9;
    four->data = 21;

    one->Next = two;
    two->Next = three;
    three->Next = four;
    four->Next = NULL;

    head = one;

    cout << " The Length OF this LinkedList is :> ";
    cout << findLength() << endl;
}
