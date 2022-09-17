// priority queue;
#include "bits/stdc++.h"
using namespace std;
struct Queue

{

    int size;

    int front;

    int rear;

    int *Q;
};

void create(struct Queue *q, int size)

{

    q->size = size;

    q->front = q->rear = -1;

    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x)

{

    if (q->rear == q->size - 1)

        printf("Queue is Full");

    else

    {

        q->rear++;

        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)

{

    int x = -1;

    if (q->front == q->rear)

        printf("Queue is Empty\n");

    else

    {

        q->front++;

        x = q->Q[q->front];
    }

    return x;
}

void Display(struct Queue q)

{

    int i;

    for (i = q.front + 1; i <= q.rear; i++)

        printf("%c ", q.Q[i]);

    printf("\n");
}

void insert(struct Queue *q1, struct Queue *q2, struct Queue *q3, char ele, int pr)

{

    if (pr == 1)

    {

        enqueue(q1, ele);
    }

    else if (pr == 2)

    {

        enqueue(q2, ele);
    }

    else

        enqueue(q3, ele);
}

int isEmpty(struct Queue *q)

{

    if (q->front == q->rear)

        return 1;

    else

        return 0;
}

int Delete (struct Queue *q1, struct Queue *q2, struct Queue *q3)

{

    int x = -1;

    if (!isEmpty(q1))

        x=dequeue(q1);

    else if (!isEmpty(q2))

        x = dequeue(q2);

    else

        x = dequeue(q3);

    return x;
}

int main()

{

    struct Queue q1, q2, q3;

    create(&q1, 10);

    create(&q2, 10);

    create(&q3, 10);

    int i;

    insert(&q1, &q2, &q3, 'a', 1);

    insert(&q1, &q2, &q3, 'b', 1);

    insert(&q1, &q2, &q3, 'c', 2);

    insert(&q1, &q2, &q3, 'd', 3);

    insert(&q1, &q2, &q3, 'e', 2);

    insert(&q1, &q2, &q3, 'f', 1);

    insert(&q1, &q2, &q3, 'g', 2);

    insert(&q1, &q2, &q3, 'h', 3);

    insert(&q1, &q2, &q3, 'i', 2);

    insert(&q1, &q2, &q3, 'j', 2);

    Display(q1);
    Display(q2);
    Display(q3);

    delete (&q1, &q2, &q3);

    delete (&q1, &q2, &q3);

    delete (&q1, &q2, &q3);

    delete (&q1, &q2, &q3);

    printf("\n\n\n");

    Display(q1);
    Display(q2);
    Display(q3);
    printf("\n\n\n");

    insert(&q1, &q2, &q3, 'z', 2);
    insert(&q1, &q2, &q3, 'w', 1);

    Display(q1);
    Display(q2);
    Display(q3);

    return 0;
}
