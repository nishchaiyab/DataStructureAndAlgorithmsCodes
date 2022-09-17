// menu driven code for matrix;
//by changing the formula we can change the matrix to upper or lower or toeplitz matrix;
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *A, n, ch, x, i, j;
    printf("Enter the size\n");
    scanf("%d", &n);
    A = (int *)malloc(n * (n + 1) / 2 * sizeof(int));
    do
    {
        printf("\nMenu\n1.Create\n2.Get\n3.Set\n4.Display\nEnter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the elements\n");
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    scanf("%d", &x);
                    if (i >= j)
                        A[i * (i - 1) / 2 + j - 1] = x;
                }
            }
            break;
        case 2:
            printf("Enter indices\n");
            scanf("%d%d", &i, &j);
            if (i >= j)
                printf("%d ", A[i * (i - 1) / 2 + j - 1]);
            else
                printf("0 ");
            break;
        case 3:
            printf("Enter row, column and element\n");
            scanf("%d%d%d", &i, &j, &x);
            if (i >= j)
                A[i * (i - 1) / 2 + j - 1] = x;
            break;
        case 4:
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (i >= j)
                        printf("%d ", A[i * (i - 1) / 2 + j - 1]);
                    else
                        printf("0 ");
                }
                printf("\n");
            }
        }
    } while (ch < 5);

    return 0;
}
