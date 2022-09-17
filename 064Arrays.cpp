//finding duplicates in sorted arrays;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[10]={3,6,8,8,10,12,15,15,15,20}; //finding duplicates;
    int n=10,j;
    int lastduplicate=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] && A[i]!=lastduplicate)
        {
            printf("Duplicate Elements are: %d\n",A[i]);
            lastduplicate=A[i];
        }
    }


    for(int i=0;i<n-1;i++)//counting duplicates;
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[j]==A[i])j++;
            printf("%d is appearing %d times.",A[i],j-i);
            i=j-1;
        }
    }
    return 0;
}