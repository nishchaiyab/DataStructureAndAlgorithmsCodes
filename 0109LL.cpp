// inserting a new node in a linked list;
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

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;

    if (index < 0 || index > count(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{

    
    Insert(first,0,10);
    Insert(first,1,20);
    Insert(first,2,30);
    Insert(first,0,05);
    display(first);
    return 0;
}