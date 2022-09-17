//finding multiple missing element in an sorted array;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={6,7,8,9,11,12,15,16,17,18,19};
    int n=11;
    int diff=6-0;
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=diff)
        {
            while(diff<A[i]-i)
            {
                printf("These elments are missing :%d\n",i+diff);
                diff++;
            }
        }
    }
    return 0;
}