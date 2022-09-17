//passing structure as a parameter using call by value;
#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};

void fun(struct Rectangle r1)
{
    r1.len=20;
    cout<<"Lenght in function fun():"<<r1.len<<endl;
    cout<<"Breadth in function fun():"<<r1.wide<<endl;
}

int main(){
    struct Rectangle r={10,5};
    fun(r);
    cout<<"Lenght in main function:"<<r.len<<endl;
    cout<<"Breadth in main function:"<<r.wide<<endl;
    return 0;
}