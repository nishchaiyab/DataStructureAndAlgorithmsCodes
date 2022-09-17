// finding duplicates in a strings;
// method 1:compare with other letters;
#include <bits/stdc++.h>
using namespace std;

int main()

{

    char A[] = "dingdong";

    int i, j, s, count;

    for (s = 0; A[s] != '\0'; s++)
    {
    }

    for (i = 0; i < s - 1; i++)
    {

        count = 1;

        if (A[i] != -1)
        {

            for (j = i + 1; j < s; j++)
            {

                if (A[i] == A[j])
                {

                    count++;

                    A[j] = -1;
                }
            }
        }

        if (count > 1)
        {

            printf("%c is appearing %d times\n", A[i], count);
        }
    }

    return 0;
}
