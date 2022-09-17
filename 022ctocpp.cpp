//converting c program to cpp program;

/*//structure and function
#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};

void initialize(struct Rectangle *r,int l,int b)
{
    r->len=l;
    r->wide=b;
}

int area(struct Rectangle r)
{
    return r.len*r.wide;
}

void changeLength(struct Rectangle *r,int l)
{
    r->len=l;
}

int main()
{
    struct Rectangle r;
    initialize(&r,10,5);
    area(r);
    changeLength(&r,20);

    return 0;
}
  */

//structure and function

//<<<<<<-------cpp program------->>>>>>>
#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    int len;
    int wide;


    Rectangle(int l, int b)
    {
        len = l;
        wide = b;
    }

    int area()
    {
        return len * wide;
    }

    void changeLength(int l)
    {
        len = l;
    }
};

int main()
{
    Rectangle r(10,5);
    r.area();
    r.changeLength(20);

    return 0;
}
