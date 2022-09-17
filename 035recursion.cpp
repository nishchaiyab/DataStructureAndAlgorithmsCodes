//sum of first n natural numbers using recursion;
#include<bits/stdc++.h>
using namespace std;

//sum of n natural numbers using loop;


int Isum(int n){
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
    }
int main(){
    int n;
    cout<<"Enter the value for n\n";
    cin>>n;
    cout<<"Sum of n natural numbers is: "<<Isum(n)<<endl;
    //cout<<sum(10);
    return 0;
    
}


