//menu driven for matrices program using functions;

#include <stdio.h>
#include <stdlib.h>
 
struct matrix
{
int *A;
int n;
};
 
void Create(struct matrix *m, int n)
{
int i, x;
printf("enter all elements : ");
for(i=1; i<=m->n; i++)
{
scanf("%d",&x);
m->A[i-1]=x;
}
}
void Set(struct matrix *m, int i, int j, int x)
{
if(i==j)
m->A[i-1]=x;
}
int Get(struct matrix m, int i, int j)
{
if(i==j)
return m.A[i-1];
else
return 0;
}
void Display(struct matrix m)
{
int i, j;
for(i=0; i<m.n; i++)
{
for(j=0; j<m.n; j++)
{
if(i==j)
printf("%d ",m.A[i]);
else
printf("0 ");
}
printf("\n");
}
}
int main()
{
int ch, i, j, x;
struct matrix m;
printf("enter dimension : ");
scanf("%d",&m.n);
m.A=(int *)malloc(m.n*sizeof(int));
printf(" MENU \n 1) create \n 2) get \n 3) set \n 4) display");
do{
printf("\n\n enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
Create(&m, m.n);
break;
case 2:
printf("enter row no. : ");
scanf("%d",&i);
printf("enter col no. : ");
scanf("%d",&j);
Get(m, i, j);
break;
case 3:
printf("enter row no. : ");
scanf("%d",&i);
printf("enter col no. : ");
scanf("%d",&j);
printf("enter element : ");
scanf("%d",&x);
Set(&m, i, j, x);
break;
case 4:
Display(m);
}
}while(ch<5);
return 0;
}