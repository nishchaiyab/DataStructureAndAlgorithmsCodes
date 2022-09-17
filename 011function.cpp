//call by value;
#include<bits/stdc++.h>
using namespace std;
int add(int num1,int num2){
    int temp=num1+num2;
    return temp;
}
int main(){
    int n1,n2,sum=0;
    cout<<"Enter the values for n1 and n2\n";
    cin>>n1>>n2;

    
    cout<<add(n1,n2);
    return 0;
}