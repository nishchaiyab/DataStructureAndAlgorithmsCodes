//pointer to an array;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int *p;
    p=A;
    for(int i=0;i<5;i++)
    {
        //cout<<A[i]<<endl;
        cout<<p[i]<<endl; //Accessing elements of array through pointer;
    }
    return 0;
}