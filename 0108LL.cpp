// searching in a linked list;

#include "bits/stdc++.h"
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

/*struct Node *Lsearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}*/
struct Node *Rsearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return Rsearch(p->next, key);
}

//improving searching using move to head method
struct Node *Lsearch(struct Node *p, int key)
{
    struct Node *q=NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p = p->next;
    }
    return NULL;
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
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 323, 23};
    create(A, 8);
    temp = Rsearch(first, 10);
    temp = Rsearch(first, 3);
    if (temp)
    {
        printf("Key is found %d", temp->data);
    }
    else
    {
        printf("Key is not found");
    }
    display(first);

    return 0;
}