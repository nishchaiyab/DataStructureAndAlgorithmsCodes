//passing structure as a parameter using call by address;
#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};

void fun(struct Rectangle *p)
{
    p->len=20;
    cout<<"Lenght in function fun():"<<p->len<<endl;
    cout<<"Breadth in function fun():"<<p->wide<<endl;
}

int main(){
    struct Rectangle r={10,5};
    fun(&r);
    cout<<"Lenght in main function:"<<r.len<<endl;
    cout<<"Breadth in main function:"<<r.wide<<endl;
    return 0;
}