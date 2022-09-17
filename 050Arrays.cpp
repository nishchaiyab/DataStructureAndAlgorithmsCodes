//deleting element from an array;
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

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int Delete(struct Array *arr,int index) //deletion
{
    int x=0;
    if(index>=0&&index <arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return 0;
    }
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    //Append(&arr,10);
    //Insert(&arr,2,10);
    printf("%d\n",Delete(&arr,3));
    Display(arr);
    return 0;
}