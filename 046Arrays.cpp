//2D ARRAYS;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int *B[3];
    int **C;
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int ));
    C[1]=(int *)malloc(4*sizeof(int ));
    C[2]=(int *)malloc(4*sizeof(int ));
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}