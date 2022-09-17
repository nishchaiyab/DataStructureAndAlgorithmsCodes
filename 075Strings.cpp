// toggling the case of alphabets in a string;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "NiSHu";
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 65 && A[i] <= 90)
        {
            A[i] += 32;
        }
        else if (A[i] >= 97 && A[i] <= 122)
        {
            A[i] -= 32;
        }
    }
    cout << A;
    return 0;
}