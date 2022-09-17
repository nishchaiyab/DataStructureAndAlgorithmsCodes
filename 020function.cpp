//no object is created in main but only object is created in function;
#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->len = 15;
    p->wide = 7;

    return p;
}
int main()
{
    struct Rectangle *ptr = fun();
    cout <<"Length :"<<ptr->len<<endl;    
    cout <<"Length :"<<ptr->wide<<endl;    


        return 0;
}