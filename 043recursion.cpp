//tower of hanoi;
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("From %d to %d\n",A,C);
        return TOH(n-1,B,A,C);
    }
}
int main(){
    TOH(16,1,2,3);
    
    return 0;
}