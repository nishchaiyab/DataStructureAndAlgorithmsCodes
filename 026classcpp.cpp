#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
         length=l;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout<<"It is a destructor\n";
    }
};
int main(){
    Rectangle r(10,5);
    cout<<"Area of Rectangle :"<<r.area()<<endl;
    cout<<"Perimeter of Rectangle :"<<r.perimeter()<<endl;
    return 0;
}