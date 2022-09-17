//finding maximum and minimum element in a linked list;

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

int max(struct Node *p)
{
    int m=-32768;
    while(p)
    {
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}
int min(struct Node *p)
{
    int mx=32768;
    while(p)
    {
        if(p->data<mx)
            mx=p->data;
        p=p->next;
    }
    return mx;
}
int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 323, 23};
    create(A, 8);
    printf("Maximum of %d\n",max(first));
    printf("Minimum of %d\n",min(first));
   
    return 0;
}