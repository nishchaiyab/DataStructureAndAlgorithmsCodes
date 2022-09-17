// permutations in a strings;
// method 2;
#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

void swap(char *x, char *y)
{

    int temp = *x;

    *x = *y;

    *y = temp;
}

void strPerSwap(char *A, int l, int h)
{

    int i;

    if (l == h)
    {

        printf("%s\n", A);
    }

    else
    {

        for (i = l; i <= h; i++)
        {

            swap(&A[l], &A[i]);

            strPerSwap(A, l + 1, h);

            swap(&A[l], &A[i]);
        }
    }
}

int main()
{

    int i = 0;

    char A[] = "ABC";

    for (; A[i] != 0; i++)
        ;

    strPerSwap(A, 0, i - 1);

    return 0;
}