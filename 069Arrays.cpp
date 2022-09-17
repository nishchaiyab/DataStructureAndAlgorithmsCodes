//finding a pair of elements with sum k using hashing table;
#include <stdio.h>

#include <stdlib.h>

int main()
{

    int A[10] = {6,3,8,10,16,7,5,2,9,14};

    int *B;

    int i, l, h, n = 10;

    int k = 10;

    l = A[0];

    h = A[0];

    for (i = 0; i < n; i++)

    {

        if (A[i] < l)

        {

            l = A[i];
        }

        else if (A[i] > h)

        {

            h = A[i];
        }
    }

    B = (int *)malloc((h + 1) * (sizeof(int))); // changes

    for (int i = 0; i < h + 1; i++)
    { // changes
        B[i] = 0;
    }

    for (i = 0; i < n; i++)

    {

        if (B[k - A[i]] != 0) // changes

        {

            printf("%d+%d=%d\n", A[i], k - A[i], k);
        }

        B[A[i]]++;
    }
}