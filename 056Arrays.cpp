//merging arrays ;
// Get(),Set(),Max(),Min(),Sum() and average() function;
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElement are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }

}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else
        {
            arr3->A[k++]=arr2->A[j++];
        }
    }
        for(;i<arr1->length;i++)
        {
            arr3->A[k++]=arr1->A[i];
        }
        for(;j<arr2->length;j++)
        {
            arr3->A[k++]=arr2->A[i];
        }
        arr3->length=arr1->length+arr2->length;
        arr3->size=10;

        return arr3;
    }


int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    
    return 0;
}