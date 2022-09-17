#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
    char x;
};
int main(){
  struct Rectangle r;
  r.length=10;
  r.breadth=2;

  cout<<"Lenght of a Rectangle:"<<r.length<<"cm"<<endl;
  cout<<"Breadth of a Rectangle:"<<r.breadth<<"cm"<<endl; 

  cout<<"Area of Rectangle is :"<<r.length*r.breadth<<"cm"<<endl; 
    return 0;
}