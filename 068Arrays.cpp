//finding a pair of element with sum k (a+b=k);
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int k=10;
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==k)
            printf("%d+%d=%d\n",A[i],A[j],k);
        }
    }
    return 0;
}