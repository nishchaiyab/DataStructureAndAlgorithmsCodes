//finding duplicates in a unsorted arrays;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int count,n=10;
    int A[10]={8,3,6,4,6,5,6,8,2,7};
    for(int i=0;i<n-1;i++)
    {
        count=1;
        if(A[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
            printf("%d %d\n",A[i],count);
        }
    }
    return 0;
}