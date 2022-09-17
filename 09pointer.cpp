/*how to create an object of structure in heap by using malloc() dynamically;
*/
#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};
int main(){
  struct Rectangle *p;
  p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
  p->len=10;
  p->wide=20;
  cout<<"Area of rectangle is :"<<p->len*p->wide<<endl;  
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
 struct student{
 int rollno;
 float marks;
 };
 int x;
 int *y;
 struct student s1,s2,s3; //memory has been allocated
 struct student *p1, *p2,*p3;//

 x=10;
 // p1=&x;
 p1=&s2;//p1 will start pointing to s1
p3=p1;//p3 will start pointing to p1

 // *p1=&s1; bcz *p1 can not hold the address bcz it holds its value
 (*p1).rollno=101;
 (*p1).marks=4.4;
  printf("the roll no of s2 is = %d \n", (*p1).rollno);
    printf("the marks of s2 is = %f \n
    */