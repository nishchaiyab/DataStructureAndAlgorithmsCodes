//combination formula;
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int Cr(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    return Cr(n-1,r-1)+Cr(n-1,r);
}

int C(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
int main(){
    cout<<Cr(5,5);
    return 0;
}