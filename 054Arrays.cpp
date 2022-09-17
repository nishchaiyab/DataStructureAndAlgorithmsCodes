// Reverse an array an left shift and left rotate and right shift and right rotate;
//  Get(),Set(),Max(),Min(),Sum() and average() function;
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

void Reverse(struct Array *arr)
{
    int i, j;
    int *B;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        Swap(&arr->A[i], &arr->A[j]);
    }
}
void Leftrotate(struct Array *arr) // left rotate;
{
    int temp = arr->A[0], i;
    for (i = 0; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->A[arr->length - 1] = temp;
}

void Leftshift(struct Array *arr) // left shift;
{
    int i;
    for (i = 0; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->A[arr->length - 1] = 0;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    // Reverse2(&arr);
    // Reverse(&arr);
    //Leftrotate(&arr);
    Leftshift(&arr);
    Display(arr);
    return 0;
}
