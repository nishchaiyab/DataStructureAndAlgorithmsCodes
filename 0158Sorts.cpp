#include "bits/stdc++.h"
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0)
            break;
    }
}

void Insertion(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1&&A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

void Selection(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i],&A[k]);
    }
}

int Partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;

    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j)swap(&A[i],&A[j]);
    }while(i<j);

    swap(&A[l],&A[j]);
    return j;

    
}

void Quick(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=Partition(A,l,h);
        Quick(A,l,j);
        Quick(A,j+1,h);
    }
}

void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=mid&&j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    
    for(int i=l;i<=h;i++)
        A[i]=B[i];
}

void IMerge(int A[],int n)
{
    int p,l,h,mid,i;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n)
        Merge(A,0,p/2-1,n-1);
}

void RMerge(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        RMerge(A,l,mid);
        RMerge(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}


int Findmax(int A[],int n)
{
    int max=INT32_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
void Countsort(int A[],int n)
{
    int i,j,max,*C;
    max=Findmax(A,n);
    C=(int *)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++)
    {
        C[i]=0;
    }
    for(i=0;i<n;i++)
    {
        C[A[i]]++;
    }
    i=0;j=0;
    while(j<max+1)
    {
        if(C[j]>0)
        {
            A[i++]=j;
            C[j]--;
        }
        else
            j++;
    }
}

void Shellsort(int A[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp)
            {
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
        }
    }
}
int main()
{
    int A[] = {11,13,7,12,16,9,24,5,10,3}, n = 10,i;
    Shellsort(A,n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}