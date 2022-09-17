// Comparing two strings to check weather they are same or not;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "painter";
    char B[] = "paint";
    int i, j, temp;
    for (i = 0, j = 0; (A[i] != '\0' && B[j] != '\0'); i++, j++)
    {
        if (A[i] != B[j])
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
    {
        if (A[i] > B[j])
            cout << "Bigger:" << A;
        else
            cout << "Bigger:" << B;
    }
    else if (A[i] == '\0' && B[j] == '\0')
        cout << "Equal";
    else
    {
        if (A[i] == '\0')
            cout << "Bigger:" << B;
        else
            cout << "Bigger:" << A;
    }
}