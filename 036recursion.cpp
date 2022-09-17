//factorial using recusion and iterative;
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int Ifact(int n)
{
    int f=1;
    for (int i = 1;i<=n ;i++) {
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;

    cout<<"Factorial of "<<n<<" is :"<<Ifact(n)<<endl;

    return 0;
} 