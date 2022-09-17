//taylor series;
#include<bits/stdc++.h>
using namespace std;
double e(int x,int  n)
{
    static double p=1,f=1;
    double r;

    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
main(){
    double x,n;
    cout<<"Entr values for x and n\n";
    cin>>x>>n;
    cout<<e(x,n)<<endl;
    return 0;
}