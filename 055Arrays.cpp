// inserting an element in an sorted array;

#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void Swap(int *x, int *y) // code for swapping numbers;
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array arr)
{
    int i;
    printf("\nElement are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

/*void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
    {
        return;
    }
    while (arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}*/

void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[i] >= 0)
            j--;
        if (i < j)
            Swap(&arr->A[i], &arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{2, -3, 25, 10, -15, 7}, 10, 6};
    
    Rearrange(&arr);
    Display(arr);
    return 0;
}
