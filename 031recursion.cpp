//using static or global variables in recursion;
#include <bits/stdc++.h>
using namespace std;
int x = 0;
int fun(int n)
{

    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d\n", fun(a));
    //n=5

    printf("%d\n", fun(a));
    //n=10

    printf("%d", fun(a));
    //n=15

    return 0;
}