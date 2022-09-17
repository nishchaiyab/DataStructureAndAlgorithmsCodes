// checking weather a giving string is palindrome or not;
// Method 2;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "madam";
    int length = strlen(a);
    int i, j;
    int flag = 0;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("not palindrome");
    }
    else
    {
        printf("Its palindrom");
    }
    return 0;
}