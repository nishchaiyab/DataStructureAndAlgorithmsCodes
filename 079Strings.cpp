//reversing string;
//using Another array for reversal;
#include "bits/stdc++.h"
int main()

{

    char A[] = "Nishchaiya";

    char B[10];

    int i;

    for (i = 0; A[i] != '\0'; i++)

    {
    }

    i = i - 1;

    int j;

    for (j = 0; i >= 0; i--, j++)

    {

        B[j] = A[i];
    }

    B[j] = '\0'; // this line is missing. string B should also have \0

    printf("%s", B);
    return 0;
}