// finding duplicates in a strings;
// method 2:using hashtable or counting;
//<<<<<-----when letters are lower case---->>>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "finding";

    int H[26], i;

    for (i = 0; i < 26; i++)

        H[i] = 0;

    for (i = 0; A[i] != '\0'; i++)

    {

        H[A[i] - 97]++;
    }

    for (i = 0; i < 26; i++)

    {

        if (H[i] > 1)

        {

            printf("%c \t", i + 97);

            printf("%d\n", H[i]);
        }
    }
    return 0;
}
