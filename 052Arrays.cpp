// Binary search;
//  Searching in Arrays;
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

int BinarySearch(struct Array arr, int key) // iterative approach;
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid - 1])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int RbinarySearch(int a[], int l, int h, int key) // iterative approach;
{

    int mid;
    if (l <= h)
    {
        mid = (l + h / 2);
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RbinarySearch(a, l, mid - 1, key);
        else
            return RbinarySearch(a, mid + 1, h, key);
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    printf("Element is present at index :%d\n", RbinarySearch(arr.A, 0, arr.length, 2));
    Display(arr);
    return 0;
}