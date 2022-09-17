// creating a c program for creating and displaying of linked list;
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 0; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);

    display(first);

    return 0;
}