//array as a parameter;
#include<bits/stdc++.h>
using namespace std;

void fun(int A[],int n)
{
    for (int i = 0; i<n; i++) {
        printf("%d\n",A[i]);
    }
}
int main(){
    int A[]={1,2,3,4,5};
    fun(A,5);
    return 0;
}

//instead of using [] we can also use * becoz we are creating the to store the A[0] address of an array;s