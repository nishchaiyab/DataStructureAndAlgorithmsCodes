//#ifndef Queue01_h
#define Queue01_h
#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node ));
    if(t==NULL)
        printf("Queue is FULL\n");
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    struct Node* t;

    if(front==NULL)
        printf("Queue is Empty\n");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front==NULL;
}