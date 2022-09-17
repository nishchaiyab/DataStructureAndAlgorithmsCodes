// checking weather the giving string is palingrome or not;
// method 1;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    char A[] = "madam";

    char B[n + 1];

    // copying data from arr to arr1 (its not required actually)
    for (int i = 0; i < n + 1; i++)

    {

        B[i] = A[i];
    }

        for (int j = 0; j < n; j++)

    {

        if (A[j] != B[n - 1 - j])
        {
            cout << "Not a palindrome" << endl;
            return 0;
        }
    }

    cout << "Its palindrome" << endl;
}
