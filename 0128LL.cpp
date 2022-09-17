// Sparse Matrix using linked list;
#include <iostream>
using namespace std;
class node
{
public:
    int col;
    int val;
    node *next;
};
class sparse
{
private:
    int trow;
    int tcol;
    node **a; // take this as a double pointer
public:
    sparse(int r, int c)
    {
        trow = r;
        tcol = c;
        node *t, *last;
        a = new node *[r]; // create a array in heap
        int i, x;
        for (i = 0; i < r; i++)
        {
            a[i] = NULL;
        }
        for (i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "enter the element at row:" << i << " and column:" << j << "\n";
                cin >> x;
                if (x != 0)
                {
                    if (a[i] == NULL)
                    {
                        t = new node;
                        t->col = j;
                        t->val = x;
                        t->next = NULL;
                        a[i] = t;
                        last = t;
                    }
                    else
                    {
                        t = new node;
                        t->col = j;
                        t->val = x;
                        t->next = NULL;
                        last->next = t;
                        last = t;
                    }
                }
            }
            cout << endl;
        }
    }
    void display()
    {
        int i, j;
        node *p;
        for (i = 0; i < trow; i++)
        {
            p = a[i];
            for (j = 0; j < tcol; j++)
            {

                if (p != NULL && j == p->col)
                {
                    cout << p->val << " ";
                    p = p->next;
                }
                else
                    cout
                        << "0 ";
            }
            cout << endl;
        }
    }
};
int main()

{
    sparse a(3, 3);
    a.display();
}
/*#include<stdio.h>

#include<stdlib.h>

struct node

{

int col;

int val;

struct node *next;

};

int main()

{

int nz,i,m,n,c,v,j;

printf("enter no. of rows.\n");

scanf("%d",&m);

printf("enter no. of columns.\n");

scanf("%d",&n);

struct node *A[m],*last;

for(i=0;i<m;i++)

{

A[i]=NULL;

printf("Enter non zero elements in %d row.\n",i+1);

scanf("%d",&nz);

for(j=0;j<nz;j++)

{

if(A[i]==NULL)

{

A[i]=(struct node*)malloc(sizeof(struct node));

last=A[i];

printf("enter column and value.\n");

scanf("%d%d",&c,&v);

last->col=c;

last->val=v;

last->next=NULL;

}

else

{

last->next=(struct node*)malloc(sizeof(struct node));

printf("enter column and value.\n");

scanf("%d%d",&c,&v);
last=last->next;// you missed this statement. last should move to new node
last->col=c;

last->val=v;

last->next=NULL;

}

}

}

for(i=0;i<m;i++)

{
last=NULL; // make last as NULL everytime, let it start freshly

if(A[i]!=NULL)

{

last=A[i];
}

for(j=0;j<n;j++)

{

if(last && last->col==j) // check if last is NULL

{

printf("%d ",last->val);

last=last->next;

}

else

printf("0 ");

}

printf("\n");

}

return 0;

}*/