// inserting an element in an array;
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

void Append(struct Array *arr, int x) //Addition
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr,int index,int x) //insertion
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
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    //Append(&arr,10);
    Insert(&arr,2,10);
    Display(arr);
    return 0;
}