// counting words;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "How   ";
    int i, word = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << word+1;
    return 0;
}