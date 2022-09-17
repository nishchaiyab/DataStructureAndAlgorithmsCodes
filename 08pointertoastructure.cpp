//pointer to a structure;
#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int len;
    int wide;
};
int main(){
    Rectangle r={10,5};
    Rectangle *p=&r;

    r.len=15;
    (*p).len=20;
    p->len=20;
    cout<<p->len<<endl;  
    return 0;
}