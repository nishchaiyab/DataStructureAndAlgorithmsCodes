// lower triangular matrix using row major mapping;
// using c code;

#include <bits/stdc++.h>
using namespace std;
struct Matrix
{
    int *A;
    int n;
};
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
        m->A[i * (i - 1) / 2 + j - 1] = x;
}
int get(struct Matrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i * (i - 1) / 2 + j - 1];
    }
    else
    {
        return 0;
    }
}
void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
                cout << m.A[i * (i - 1) / 2 + j - 1];

            else

                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    int x;
    struct Matrix m;
    printf("enter dimensions");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));

    cout << "Enter All Elements";
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }
    printf("\n\n");
    Display(m);
    return 0;
}