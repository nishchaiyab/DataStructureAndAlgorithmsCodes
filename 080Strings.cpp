//string reverse method 2;

#include <iostream>

using namespace std;

int main()
{

    char A[]="python";
    int i, j;

    char temp;

    for (j = 0; A[j] != '\0'; j++) // this for loop is independent, for finding length

    {
    }

    j = j - 1; // this is length-1 index

    for (i = 0; i < j; i++, j--) // this loop is for reversing

    {

        temp = A[i];

        A[i] = A[j];

        A[j] = temp;
    }

    cout << "reverse of the string is\n"
         << A;

    return 0;
}