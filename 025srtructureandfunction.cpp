//structure and function;
//area and perimeter of a rectangle;
#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};
int Area(struct Rectangle r)
{
    return r.len * r.wide;
}

void initialize(struct Rectangle *r,int l,int b)
{
    r->len=l;
    r->wide=b;
}

int Peri(struct Rectangle r)
{
    int a = 2 * (r.len + r.wide);
    return a;
}

int main()
{   
    struct Rectangle r={0,0};
    int l=0,b=0;
    cout << "Enter the value of len and wide\n";
    cin >>l >> b;
    initialize(&r,l,b);
    cout << "Area of the Rectangle is :" << Area(r) << endl;
    cout << "Perimeter of the Rectangle is :" << Peri(r) << endl;

    return 0;
}