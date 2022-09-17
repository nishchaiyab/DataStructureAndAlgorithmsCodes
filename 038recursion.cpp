//power function using recusion;
#include<bits/stdc++.h>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return pow(m,n-1)*m;
    }
}


int Ipow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2)*m;
    }//efficient way ;
}
int main(){
    int m,n;
    cout<<"Enter values for m and n\n";
    cin>>m>>n;
    cout<<m<<" ^ "<<n<<" is :"<<Ipow(m,n)<<endl;
    return 0;
}